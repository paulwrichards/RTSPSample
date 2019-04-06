#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vlc/vlc.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    bool isStreaming;

    Ui::MainWindow *ui;

    libvlc_instance_t * inst;
    libvlc_media_player_t * mp;
    libvlc_media_t *m;

    void startLiveStream();
    void stopLiveStream();
    bool isLiveStreaming();

    void startMediaPlayer(libvlc_media_player_t *mPlayer , HWND hWnd);

    void stopMediaPlayer(libvlc_media_player_t *mPlayer);

    void showMessage(QString msg);
public slots:
    void onStartBtnClicked();
    void onStopBtnClicked();
};

#endif // MAINWINDOW_H
