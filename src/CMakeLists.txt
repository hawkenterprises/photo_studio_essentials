cmake_minimum_required(VERSION 2.8)

project( mainc )

find_package( OpenCV REQUIRED )
find_package(wxWidgets REQUIRED COMPONENTS net core base)

include(${wxWidgets_USE_FILE})
include_directories( ${OpenCV_INCLUDE_DIRS} )
INCLUDE_DIRECTORIES(${GTK3_INCLUDE_DIRS})
LINK_DIRECTORIES(${GTK3_LIBRARY_DIRS})


add_executable( DisplayImage mainc.cpp )

add_executable( main 
    Main.cpp
    App.cpp
)

target_link_libraries( DisplayImage ${OpenCV_LIBS} opencv_core
opencv_highgui
opencv_imgproc
opencv_imgcodecs)

target_link_libraries(main ${wxWidgets_LIBRARIES} ${OpenCV_LIBS} ${GTK3_LIBRARY_DIRS})