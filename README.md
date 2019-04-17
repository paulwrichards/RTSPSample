# RTSP/DSHOW/FILE player sample


### How to use libVLC(Windows)

#### Add libVLC library to your project.

- copy vlc folder into your project folder.

- copy libvlc.x64.lib and libvlccore.x64.lib to your project and add library files to your project.

- copy npvlc.dll, libvlccore.dll, libvlc.dll, libgcc_s_seh-1.dll to your build path.

- copy plugins folder to your build path.

#### Use libVLC to play RTSP/DSHOW/FILE

- Refer to this code snippet
```
    libvlc_instance_t * inst;
    libvlc_media_player_t * mp;
    libvlc_media_t * m;
	// Load the VLC engine
    inst = libvlc_new (0, NULL);
    if(inst == NULL)
    {
        showMessage("Can not open your live stream.");
        this->close();
    }
    isStreaming = false;
	//create media from url
    m = libvlc_media_new_location (inst, url);

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

    if(m == nullptr)
        return;
    if(mPlayer == nullptr)
    {
        showMessage("Can not open your live stream.");
        return;
    }
    // Create a media player playing environement
    if(libvlc_media_player_is_playing(mPlayer))
        return;
    libvlc_audio_set_volume(mPlayer , 0);//mute

    //you need to change
    libvlc_media_player_set_hwnd (mPlayer, hWnd);//refer to QWidget::winID()
    int isPlay = libvlc_media_player_play (mPlayer);
    if(isPlay == -1)
    {
        showMessage("Can not open your live stream.");
        return;
    }
```