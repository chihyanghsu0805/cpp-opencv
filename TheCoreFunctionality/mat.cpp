// "Copyright [year] <Copyright Owner>"  [legal/copyright]
// https://docs.opencv.org/4.6.0/d6/d6d/tutorial_mat_the_basic_image_container.html

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

int main() {
  cv::Mat M(2, 2, CV_8UC3, cv::Scalar(0, 0, 255));
  std::cout << "M = " << std::endl
            << " " << cv::format(M, cv::Formatter::FMT_PYTHON) << std::endl
            << std::endl;
}
