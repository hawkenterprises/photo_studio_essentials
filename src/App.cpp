#include "App.h"
#include "Main.h"
#include "../include/id.h"

//========================================
#include <opencv4/opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;
//========================================

IMPLEMENT_APP(App);

App::App()
{
}

App::~App()
{
}

bool App::OnInit()
{
    Main *mainwindow = new Main(nullptr, window::id::WINDOW_MAIN, "Test App");
    mainwindow->Show();

    //===============================================
    cout << "this application bloody runs" << endl;
    int argc = 2;
    if (argc != 2)
    {
        std::cout << "input not given" << std::endl;
    }
    else
    {
        std::cout << "displaying image" << std::endl;
        Mat image = imread("/home/mohan/Desktop/cpp/photo_studio_essentials/src/Jr.jpg", 1);
        namedWindow("img", WINDOW_GUI_EXPANDED);
        imshow("img", image);
    }
    waitKey(0);
    //===============================================

    return true;
}