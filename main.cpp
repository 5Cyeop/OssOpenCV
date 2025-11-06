#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

int main()
{
	/*
	Mat img1 = imread("lenna256.bmp", 0);
	Mat img2 = imread("lenna256.bmp", 0);
	
	for (int j = 0; j < img1.rows; j++)
	{
		for (int i = 0; i < img1.cols; i++)
		{
			if (j < 10 || j > img1.rows - 10 || i < 10 || i > img1.cols - 10)
			{
				img1.data[img1.cols * j + i] = 0;
			}
		}
	}

	for (int j = 0; j < img1.rows; j++)
	{
		for (int i = 0; i < img1.cols; i++)
		{
			if (j < 10 || j > img1.rows - 10 || i < 10 || i > img1.cols - 10)
			{
				img2.at<uchar>(j, i) = 0;
			}
		}
	}

	imwrite("test.bmp", img1);
	imwrite("test2.bmp", img2);

	waitKey();
	*/

	/*
	void Mat1();
	{
		float data[] = { 1, 1, 2, 3 };
		Mat mat1(2, 2, CV_32FC1, data);
		cout << "mat1 : " << endl << mat1 << endl << endl;

		Mat mat2 = mat1.inv();
		cout << "mat2 : " << endl << mat2 << endl << endl;

		cout << "mat1.t() : " << endl << mat1.t() << endl << endl;
		cout << "mat1 + 3 : " << endl << mat1 + 3 << endl << endl;

		cout << "mat1 + mat2 : " << endl << mat1 + mat2 << endl << endl;
		cout << "mat1 * mat2 : " << endl << mat1 * mat2 << endl << endl;
	}
	*/

	/*
	uchar data1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	Mat mat1(3, 4, CV_8UC1, data1);
	Mat mat2 = mat1.reshape(0, 1);
	Mat mat3 = mat1.reshape(0, 2);
	Mat mat4 = mat1.reshape(0, 3);
	Mat mat5 = mat1.reshape(0, 4);
	//Mat mat6 = mat1.reshape(0, 5);

	cout << "mat1: " << endl << mat1 << endl << endl;
	cout << "mat2: " << endl << mat2 << endl << endl;
	cout << "mat3: " << endl << mat3 << endl << endl;
	cout << "mat4: " << endl << mat4 << endl << endl;
	cout << "mat5: " << endl << mat5 << endl << endl;
	//cout << "mat6: " << endl << mat6 << endl << endl;
	*/

	/*
	void Mat2();
	{
		Mat img1 = imread("lenna.bmp", IMREAD_GRAYSCALE);
		Mat img1f;
		img1.convertTo(img1f, CV_32FC1);

		uchar data1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
		Mat mat1(3, 4, CV_8UC1, data1);
		Mat mat2 = mat1.reshape(0, 1);

		cout << "mat1 : " << endl << mat1 << endl << endl;
		cout << "mat2 : " << endl << mat2 << endl << endl;

		Mat mat3 = Mat::ones(1, 4, CV_8UC1) * 255;
		mat1.push_back(mat3);
		cout << "mat3 : " << endl << mat1 << endl << endl;

		mat1.resize(6, 100);
		cout << "mat4 : " << endl << mat1 << endl << endl;
		
	}
	*/

	/*
	Mat img1 = imread("lenna.bmp");
	img1.at<Vec3b>(100, 50)[0] = 0;
	img1.at<Vec3b>(100, 50)[1] = 255;
	img1.at<Vec3b>(100, 50)[2] = 0;

	imshow("lenna.bmp", img1);
	*/

	/*
	Mat img2 = imread("lenna.bmp.", 1);
	cout << img2.at<Vec3b>(100, 50) << endl;

	uchar b = img2.at<Vec3b>(100, 50)[0];
	uchar g = img2.at<Vec3b>(100, 50)[1];
	uchar r = img2.at<Vec3b>(100, 50)[2];

	cout << b << endl;
	cout << g << endl;
	cout << r << endl;
	*/

	/*
	Mat img3 = imread("lenna.bmp");

	
	int a = (100 * img3.cols + 50) * 3;

	img3.data[a + 0] = 0;   
	img3.data[a + 1] = 255;
	img3.data[a + 2] = 0;

	
	imwrite("lenna3.bmp", img3);
	waitKey();
	*/
	
	/*
	Mat imga = imread("lenna.bmp");

	for (int j = 0; j < imga.cols; j++)
	{
		for (int i = 0; i < imga.rows; i++)
		{
			if (j < 10 || j > imga.cols - 11 || i < 10 || i > imga.rows - 11)
			{
				imga.at<Vec3b>(i, j)[0] = 255;
				imga.at<Vec3b>(i, j)[1] = 0;
				imga.at<Vec3b>(i, j)[2] = 0;
			}
			
		}
	}

	imwrite("lenna213.bmp", imga);
	

	Mat imgb = imread("lenna.bmp");

	for (int j = 0; j < imga.cols; j++)
	{
		for (int i = 0; i < imga.rows; i++)
		{
			if (j < 10 || j > imga.cols - 11 || i < 10 || i > imga.rows - 11)
			{
				imgb.data[imgb.cols * 3 * j + (3 * i) + 0] = 255;
				imgb.data[imgb.cols * 3 * j + (3 * i) + 1] = 0;
				imgb.data[imgb.cols * 3 * j + (3 * i) + 2] = 0;
			}

		}
	}

	imwrite("lenna213-2.bmp", imga);
	waitKey();
	*/

	Mat img = imread("lenna.bmp");

	if (img.empty())
	{
		cerr << "Image load failed" << endl;
		return -1;
	}

	while (1)
	{
		imshow("test", img);
		int key = waitKey();

		if (key == 'i')
			img = ~img;

		else if (key == 27 || key == 'q' || key == 'Q')
			break;
	}


	return 0;
}

/*
	역행렬이 존재하는 일반적인 행렬이라면 가우스 소거법을 사용하는 DECOMP_LU를 사용할 수 있다. 이 값은 기본값으로 지정되어 있으므로 생략 가능
	역행렬이 존재하지 않는 경우 DECOMP_SVD를 지정하면 singulat value decomposiotion 방법을 이용하여 역행렬을 구할 수 있음

	reshape 함수 : reshape(변경 할 채널 수, 변경 할 행의 수) 채널 수 가 0이면 채널 변경 없음
	resize 함수 : resize(변경 할 행의 수, 빈공간을 채울 숫자)

	Vec 클래스 Matx클래스를 상속받아 만들어진 클래스, 열 개수가 1개로 특화된 벡터 표현 클래스
	Vec<uchar, 3> p1, p2(0, 0, 255);



*/