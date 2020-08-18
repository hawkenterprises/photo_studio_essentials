#include "App.h"
#include "id.h"
#include "Main.h"

//////////////////////////////
#include <opencv4/opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;
/////////////////////////////

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

    //////////////////////////////////////
    cout << "this application bloody runs" << endl;
    int argc = 2;
    if (argc != 2)
    {
        std::cout << "input not given" << std::endl;
    }
    else
    {
        std::cout << "displaying image" << std::endl;
        Mat image = imread("Jr.jpg", 1);
        // imshow("img", image);
    }
    cv::waitKey(0);
    ///////////////////////////////////

    return true;
}