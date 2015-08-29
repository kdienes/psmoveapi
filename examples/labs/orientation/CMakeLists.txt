set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)
<<<<<<< HEAD

# find_package(Qt53D REQUIRED)
=======
find_package(Qt53D REQUIRED)
>>>>>>> 5d83eda1a4cff38ef56be8c95e374ad69987c083

add_executable(orientation main.cpp orientationview.cpp orientationview.h orientation.h)

include_directories(../psmove)

target_link_libraries(orientation psmoveapi psmoveapi_tracker)

<<<<<<< HEAD
qt5_use_modules(orientation Widgets) # 3D)
=======
qt5_use_modules(orientation Widgets 3D)
>>>>>>> 5d83eda1a4cff38ef56be8c95e374ad69987c083
