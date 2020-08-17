#include <opencv4/opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(int argc, char **argv)
{

    if (argc != 2)
    {
        std::cout << "input not given" << std::endl;
    }
    else
    {
        std::cout << "displaying image" << std::endl;
        Mat image = imread(argv[1], 1);
        imshow("img", image);
    }
    waitKey(0);
}