#include <opencv2/opencv.hpp>
#include <iostream>
int main()
{
    cv::Mat mat(100,233, CV_8UC3);
    std::cout << "mat.rows = " << mat.rows << std::endl;
    std::cout << "mat.cols = " << mat.cols << std::endl;
    return 0;
}