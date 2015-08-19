set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)

# find_package(Qt53D REQUIRED)

add_executable(orientation main.cpp orientationview.cpp orientationview.h orientation.h)

include_directories(../psmove)

target_link_libraries(orientation psmoveapi psmoveapi_tracker)

qt5_use_modules(orientation Widgets) # 3D)
