#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    /* Load the VLC engine */
    inst = libvlc_new (0, NULL);
    if(inst == NULL)
    {
        showMessage("Can not open your live stream.");
        this->close();
    }
    isStreaming = false;

    connect(ui->startBtn , SIGNAL(clicked(bool)) , this , SLOT(onStartBtnClicked()));
    connect(ui->stopBtn , SIGNAL(clicked(bool)) , this , SLOT(onStopBtnClicked()));
}

MainWindow::~MainWindow()
{
    if(inst != NULL)
        libvlc_release (inst);
    isStreaming = false;
    delete ui;
}
void MainWindow::startLiveStream()
{
    if(!isStreaming)
    {
        //create media from url
        m = libvlc_media_new_location (inst, ui->urlEdit->text().toStdString().c_str());

        if(m == nullptr)
        {
            showMessage("Can not open your live stream.");
            return;
        }
        //add options such as caching size
        libvlc_media_add_option(m , ":network-caching=300"); // control latency

        //play file..................
        //m = libvlc_media_new_path (inst, "/path/to/test.mov");
        //play direct show - for video capture devices such as USB camera and SDI camera.
        // m = libvlc_media_new_location(inst , "dshow://");
        //libvlc_media_add_option(m , (QString(":dshow-vdev=") + cam->getCameraId()).toStdString().c_str());

        mp = libvlc_media_player_new_from_media (m);

        startMediaPlayer(mp , (HWND)(ui->frame->winId()));

        /* No need to keep the media now */
        libvlc_media_release (m);
        /* or on windows */

        isStreaming = true;
    }
}
void MainWindow::stopLiveStream()
{
    stopMediaPlayer(mp);
}
void MainWindow::onStartBtnClicked()
{
    startLiveStream();
}
void MainWindow::onStopBtnClicked()
{
    stopLiveStream();
    isStreaming = false;
    mp = nullptr;
}
void MainWindow::startMediaPlayer(libvlc_media_player_t *mPlayer , HWND hWnd)
{
    if(m == nullptr)
        return;
    if(mPlayer == nullptr)
    {
        showMessage("Can not open your live stream.");
        return;
    }
    /* Create a media player playing environement */
    if(libvlc_media_player_is_playing(mPlayer))
        return;
    libvlc_audio_set_volume(mPlayer , 0);//mute

    //you need to change
    libvlc_media_player_set_hwnd (mPlayer, hWnd);
    int isPlay = libvlc_media_player_play (mPlayer);
    if(isPlay == -1)
    {
        showMessage("Can not open your live stream.");
        return;
    }
}
void MainWindow::stopMediaPlayer(libvlc_media_player_t *mPlayer)
{
    if(isStreaming && mPlayer != NULL)
    {
        /* Stop playing */
        libvlc_media_player_stop (mPlayer);
        /* Free the media_player */
        libvlc_media_player_release (mPlayer);
    }

}

void MainWindow::showMessage(QString msg)
{
    QMessageBox msgBox;
    msgBox.setText(msg);
    msgBox.exec();
}
