The following files had instances of "Ximea", probably need to work on these files
1. make.m
2. SLStudio.pro
3. Camera.cpp
4. CameraTest.pro
5. CameraXIMEA.cpp
6. CameraXIMEA.h

Path:
1. /matlab
2. /src
3. /src/camera
4. /src/camera
5. /src/camera
6. /src/camera

Hardware
Camera:     MV-CA050-20UM   (Hikrobot)
Projector:  DLP Light Crafter 4500

Development remark:
- The codes assumed only 1 single Hikrobot camera is connected to the PC. (i.e. Camera[0])

Compiling procedure:
sudo apt-get install libpcl-dev libvtk9-qt-dev libglew-dev freeglut3-dev qtcreator libusb-1.0-0-dev qmake6 libxrandr-dev
git clone https://github.com/757dyar/slstudio.git
cd slstudio
mkdir qmake_build
cd qmake_build
qmake -makefile -o Makefile ../src/SLStudio.pro
make
./SLStudio