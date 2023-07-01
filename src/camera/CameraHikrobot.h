#ifndef CAMERAHIKROBOT_H
#define CAMERAHIKROBOT_H

#include "Camera.h"

////////////////////////////////////////// For later change
// XIMEA specific type
typedef void* HANDLE;
//////////////////////////////////////////

class CameraHikrobot : public Camera {
    public:
        // Static methods
        static std::vector<CameraInfo> getCameraList();
        // Interface function
        CameraHikrobot(unsigned int camNum, CameraTriggerMode triggerMode);
        CameraSettings getCameraSettings();
        void setCameraSettings(CameraSettings);
        void startCapture();
        void stopCapture();
        CameraFrame getFrame();
        size_t getFrameSizeBytes();
        size_t getFrameWidth();
        size_t getFrameHeight();
        ~CameraHikrobot();
    private:
        HANDLE camera;
        int stat;

        bool g_bExit;
        unsigned int g_nPayloadSize;
        int nRet;
        void* handle;

};

#endif // CAMERAHIKROBOT_H
