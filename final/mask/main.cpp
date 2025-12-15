#include <iostream>
#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

/*
void on_level_change(int pos, void* userdata);

Mat img1 = Mat::zeros(400, 400, CV_8UC1);
*/

int main()
{
	/*
	Mat img = Mat::zeros(200, 400, CV_8UC1);

	int a = 20;
	namedWindow("img1");
	namedWindow("img");
	createTrackbar("level", "img", &a, 255, on_level_change, (void*)&img);
	imshow("img", img);
	waitKey();
	*/
	/*
	Mat src = imread("lenna.bmp", IMREAD_COLOR);
	Mat mask = imread("mask_smile.bmp", IMREAD_GRAYSCALE);

	src.setTo(Scalar(0, 255, 255), mask);

	imshow("src", src);
	imshow("mask", mask);
	waitKey();
	*/

	Mat src = imread("airplane.bmp", 1);
	Mat mask = imread("mask_plane.bmp", 0);
	Mat dst = imread("field.bmp", 1);

	for (int y = 0; y < src.rows; y++)
	{
		for (int x = 0; x < src.cols; x++)
		{
			if (mask.at<uchar>(y, x) == 255)
			{
				dst.at<Vec3b>(y, x) = src.at<Vec3b>(y, x);
			}
		}
	}

	imshow("img", dst);
	waitKey();

	return 0;
}

/*
void on_level_change(int pos, void* userdata)
{

	//Mat img1 = *(Mat*)userdata;
	img1.setTo(pos);
	imshow("img1", img1);
}
*/

/*
void mask_copyTo()
{
	Mat src = imread("airplane.bmp", 1);
	Mat mask = imread("mask_plane.bmp", 0);
	Mat dst = imread("field.bmp", 1);

	src.copyTo(dst, mask);
}
*/