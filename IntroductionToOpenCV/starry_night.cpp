// "Copyright [year] <Copyright Owner>"  [legal/copyright]
// https://docs.opencv.org/4.x/db/deb/tutorial_display_image.html

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

int main() {
  std::string image_path = cv::samples::findFile("starry_night.jpg");
  cv::Mat img = cv::imread(image_path, cv::IMREAD_COLOR);
  // cv::IMREAD_COLOR BGR 8-bit
  // cv::IMREAD_UNCHANGED as is (including alpha)
  // cv::IMREAD_GRAYSCALE as an intensity one

  if (img.empty()) {
    std::cout << "Could not read the image: " << image_path << std::endl;
    return 1;
  }

  cv::imshow("Display window", img);

  int k = cv::waitKey(0);  // Wait for a keystroke in the window
  if (k == 's') {
    cv::imwrite("starry_night.png", img);
    std::cout << "Image saved." << std::endl;
  }

  return 0;
}
