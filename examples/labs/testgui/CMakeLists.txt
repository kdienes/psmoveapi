include_directories(../../../bindings/qt)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt53D REQUIRED)

qt5_wrap_ui(ui_devicechooserdialog.h devicechooserdialog.ui)
qt5_wrap_ui(ui_psmovetestgui.h psmovetestgui.ui)

add_executable(testgui ui_devicechooserdialog.h main.cpp psmovesensorscene.cpp psmovesensorscene.h psmovetestgui.cpp psmovetestgui.h psmovetestgui.ui devicechooserdialog.ui devicechooserdialog.cpp devicechooserdialog.h)

target_link_libraries(testgui psmoveapi psmoveapiqt psmoveapi_tracker)

qt5_use_modules(testgui Widgets 3D)