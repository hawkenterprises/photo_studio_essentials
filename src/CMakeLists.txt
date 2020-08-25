
find_package( OpenCV REQUIRED )
find_package(wxWidgets REQUIRED COMPONENTS net core base)

include(${wxWidgets_USE_FILE})
include_directories( ${OpenCV_INCLUDE_DIRS} )

# add_executable( DisplayImage mainc.cpp )

add_executable( ${PROJECT_NAME} 
    Main.cpp
    App.cpp
)

# target_link_libraries( DisplayImage ${OpenCV_LIBS})  

target_link_libraries( ${PROJECT_NAME} PRIVATE ${wxWidgets_LIBRARIES} ${OpenCV_LIBS} )#"include" )

set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)