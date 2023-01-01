# cpp-opencv

## The Core Functionality (core module)

### Mat - The Basic Image Container

-   Copy operators only copy the header but the data is shared
```
Mat B(A);
C = A;
```

-   To copy the matrix, use cv::Mat::clone or cv::Mat::copyTo
```
Mat F = A.clone();
Mat G;
A.copyTo(G);
```

### Storing methods

-   OpenCV uses BGR

### Creating a Mat object explicitly

-   Use << of Mat to see the values, but it only works of 2D
-   [Many ways to crate a Mat](https://docs.opencv.org/4.6.0/d6/d6d/tutorial_mat_the_basic_image_container.html)


### How to scan images, lookup tables and time measurement with OpenCV

-   Lookup table may be mor efficient for large images
-   Default cv::LUT is most efficient
-   https://docs.opencv.org/4.6.0/db/da5/tutorial_how_to_scan_images.html