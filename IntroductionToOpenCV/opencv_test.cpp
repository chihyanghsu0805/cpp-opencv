// "Copyright [year] <Copyright Owner>"  [legal/copyright]
// https://docs.opencv.org/4.x/dd/d6e/tutorial_windows_visual_studio_opencv.html

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cout << " Usage: " << argv[0] << " ImageToLoadAndDisplay" << std::endl;
    return -1;
  }

  cv::Mat image;
  image = cv::imread(argv[1], cv::IMREAD_COLOR);  // Read the file

  if (image.empty()) {  // Check for invalid input
    std::cout << "Could not open or find the image" << std::endl;
    return -1;
  }

  // Create a window for display.
  cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE);
  cv::imshow("Display window", image);  // Show our image inside it.
  cv::waitKey(0);                       // Wait for a keystroke in the window
  return 0;
}
