#include<stdio.h>
#include<opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv){
    Mat image;
    image = imread("G:/TDT_ASIA/datasets/Vindatasets/test/0a1addecfc432a1b425d61fe57bc29d2.png");
    if(!image.data){
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display image",WINDOW_AUTOSIZE);
    imshow("Display image",image);
    waitKey(0);
    return 0;
}