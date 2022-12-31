// "Copyright [year] <Copyright Owner>"  [legal/copyright]
// https://github.com/niconielsen32/ComputerVision/tree/master/VSCodeOpenCV

#include <stdio.h>

#include <opencv2/opencv.hpp>

int main(int argc, char** argv) {
  cv::Mat image;
  image = cv::imread("C:/chihyanghsu/cpp-opencv/lenna.png");

  if (!image.data) {
    printf("No image data \n");
    return -1;
  }

  cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
  cv::imshow("Display Image", image);
  cv::waitKey(0);

  return 0;
}
