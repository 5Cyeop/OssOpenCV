#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

void on_mouse(int event, int x, int y, int flags, void*);

Mat img(400, 400, CV_8UC3, Scalar(255, 255, 255));
Point p[3];
char cc = 0;
Point ptOld;
vector<Point> pts;


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

	/*
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
	*/

	/*
	Mat img1 = imread("lenna.bmp");
	Mat img2;
	img1.copyTo(img2);

	imshow("lenna.bmp", img1);

	while (1)
	{

		int key = waitKey();

		if (key == '1')
		{
			for (int j = 0; j < img1.cols; j++)
			{
				for (int i = 0; i < img1.rows; i++)
				{
					if (j < 10 || j >= img1.cols - 10 || i < 10 || i >= img1.rows - 10)
					{
						img1.at<Vec3b>(i, j)[0] = 0;
						img1.at<Vec3b>(i, j)[1] = 255;
						img1.at<Vec3b>(i, j)[2] = 255;
					}
				}
			}
			imshow("lenna.bmp", img1);
		}

		else if (key == '2')
		{
			for (int j = 0; j < img1.cols; j++)
			{
				for (int i = 0; i < img1.rows; i++)
				{
					if (j < 10 || j >= img1.cols - 10 || i < 10 || i >= img1.rows - 10)
					{
						img1.at<Vec3b>(i, j)[0] = 0;
						img1.at<Vec3b>(i, j)[1] = 0;
						img1.at<Vec3b>(i, j)[2] = 0;
					}
				}
			}
			imshow("lenna.bmp", img1);
		}

		else if (key == '3')
		{
			img2 = ~img2;
			imshow("lenna.bmp", img2);

		}

		else if (key == '4')
			break;
	}
	*/


	/*
	//VideoCapture cap("stopwatch.avi");
	VideoCapture cap(0);

	if (!cap.isOpened())
	{
		cerr << "Video Open Failed!" << endl;
		return -1;
	}

	int w = cvRound(cap.get((CAP_PROP_FRAME_WIDTH)));
	int h = cvRound(cap.get((CAP_PROP_FRAME_HEIGHT)));


	cout << "Frame width : " << cvRound(cap.get((CAP_PROP_FRAME_WIDTH))) << endl;
	cout << "Frame height : " << cvRound(cap.get((CAP_PROP_FRAME_HEIGHT))) << endl;
	cout << "Frame count : " << cvRound(cap.get((CAP_PROP_FRAME_COUNT))) << endl;

	double fps = cap.get((CAP_PROP_FPS));
	cout << "FPS : " << fps << endl;

	int delay = cvRound(1000 / fps);

	int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X');
	VideoWriter outputV("out.avi", fourcc, fps, Size(w, h));

	Mat frame, inversed;

	while (true)
	{
		cap >> frame;
		if (frame.empty())
			break;

		inversed = ~frame;

		imshow("frame", frame);
		imshow("inversed", inversed);

		outputV << frame;

		int key = waitKey(delay);

		if (key == 27)
			break;

		if (key == 'j')
		{
			cap.set((CAP_PROP_POS_FRAMES), 100);
		}
	}

	destroyAllWindows();
	*/

	/*
	VideoCapture cap(0);

	if (!cap.isOpened())
	{
		cerr << "Video Open Failed!" << endl;
		return -1;
	}

	int w = cvRound(cap.get((CAP_PROP_FRAME_WIDTH)));
	int h = cvRound(cap.get((CAP_PROP_FRAME_HEIGHT)));


	cout << "Frame width : " << cvRound(cap.get((CAP_PROP_FRAME_WIDTH))) << endl;
	cout << "Frame height : " << cvRound(cap.get((CAP_PROP_FRAME_HEIGHT))) << endl;
	cout << "Frame count : " << cvRound(cap.get((CAP_PROP_FRAME_COUNT))) << endl;

	double fps = cap.get((CAP_PROP_FPS));
	cout << "FPS : " << fps << endl;

	int delay = cvRound(1000 / fps);

	int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X');
	VideoWriter outputV("out2.avi", fourcc, fps, Size(w, h));

	Mat frame, red_frame;

	while (true)
	{
		cap >> frame;
		if (frame.empty())
			break;

		red_frame = frame;

		for (int j = 0; j < frame.rows; j++)
		{
			for (int i = 0; i < frame.cols; i++)
			{
				if (frame.at<Vec3b>(j, i)[0] >= 150 || frame.at<Vec3b>(j, i)[1] >= 150 || frame.at<Vec3b>(j, i)[2] >= 150)
				{
					frame.at<Vec3b>(j, i)[0] = 0;
					red_frame.at<Vec3b>(j, i)[0] = frame.at<Vec3b>(j, i)[0];
					frame.at<Vec3b>(j, i)[1] = 0;
					red_frame.at<Vec3b>(j, i)[1] = frame.at<Vec3b>(j, i)[1];
					frame.at<Vec3b>(j, i)[2] = 255;
					red_frame.at<Vec3b>(j, i)[2] = frame.at<Vec3b>(j, i)[2];
				}
			}
		}

		imshow("red_frame", red_frame);

		outputV << red_frame;

		int key = waitKey(delay);

		if (key == 27)
			break;

	}

	destroyAllWindows();
		*/


		/*
		Mat img(400, 400, CV_8UC3, Scalar(255, 255, 255));

		line(img, Point(50, 50), Point(200, 50), Scalar(0, 0, 255));
		line(img, Point(50, 100), Point(200, 100), Scalar(255, 0, 255), 3);
		line(img, Point(50, 150), Point(200, 150), Scalar(255, 0, 0), 10);

		line(img, Point(250, 50), Point(350, 100), Scalar(0, 0, 255), 1, LINE_4);
		line(img, Point(250, 70), Point(350, 120), Scalar(255, 0, 255), 1, LINE_8);
		line(img, Point(250, 90), Point(350, 140), Scalar(255, 0, 0), 1, LINE_AA);

		arrowedLine(img, Point(50, 200), Point(150, 200), Scalar(0, 0, 255), 1);
		arrowedLine(img, Point(50, 250), Point(350, 250), Scalar(255, 0, 255), 1);
		arrowedLine(img, Point(50, 300), Point(350, 300), Scalar(255, 0, 0), 1, LINE_8, 0, 0.05);

		drawMarker(img, Point(50, 350), Scalar(0, 0, 255), MARKER_CROSS);
		drawMarker(img, Point(100, 350), Scalar(0, 0, 255), MARKER_TILTED_CROSS);
		drawMarker(img, Point(150, 350), Scalar(0, 0, 255), MARKER_STAR);
		drawMarker(img, Point(200, 350), Scalar(0, 0, 255), MARKER_DIAMOND);
		drawMarker(img, Point(250, 350), Scalar(0, 0, 255), MARKER_SQUARE);
		drawMarker(img, Point(300, 350), Scalar(0, 0, 255), MARKER_TRIANGLE_UP);
		drawMarker(img, Point(350, 350), Scalar(0, 0, 255), MARKER_TRIANGLE_DOWN);

		//imshow("img", img);

		void draePolys();
		{
			Mat img2(400, 400, CV_8UC3, Scalar(255, 255, 255));

			rectangle(img2, Rect(50, 50, 100, 50), Scalar(0, 0, 255), 2);
			rectangle(img2, Rect(50, 150, 100, 50), Scalar(0, 0, 128), -1);

			circle(img2, Point(300, 120), 30, Scalar(255, 255, 0), -1, LINE_AA);
			circle(img2, Point(300, 120), 60, Scalar(255, 0, 0), 3, LINE_AA);

			ellipse(img2, Point(120, 300), Size(60, 30), 20, 0, 270, Scalar(255, 255, 0), -1, LINE_AA);
			ellipse(img2, Point(120, 300), Size(100, 50), 20, 0, 360, Scalar(0, 255, 0), 2, LINE_AA);

			vector<Point> pts;
			pts.push_back(Point(250, 250));
			pts.push_back(Point(300, 250));
			pts.push_back(Point(300, 300));
			pts.push_back(Point(350, 300));
			pts.push_back(Point(350, 350));
			pts.push_back(Point(250, 350));
			polylines(img2, pts, true, Scalar(255, 0, 255), 2);

			imshow("img2", img2);
			waitKey();
			destroyAllWindows();
		}
		//waitKey();
		*/

		/*
		void drawText();
		{
			Mat img(500, 800, CV_8UC3, Scalar(255, 255, 255));

			putText(img, "FONT_HERSHEY_SIMPLEX", Point(20, 50),
				FONT_HERSHEY_SIMPLEX, 1, Scalar(0, 0, 255));

			putText(img, "FONT_HERSHEY_PLAIN", Point(20, 100),
				FONT_HERSHEY_PLAIN, 1, Scalar(0, 0, 255));

			putText(img, "FONT_HERSHEY_DUPLEX", Point(20, 150),
				FONT_HERSHEY_DUPLEX, 1, Scalar(0, 0, 255));

			putText(img, "FONT_HERSHEY_COMPLEX", Point(20, 200),
				FONT_HERSHEY_COMPLEX, 1, Scalar(255, 0, 0));

			putText(img, "FONT_HERSHEY_TRIPLEX", Point(20, 250),
				FONT_HERSHEY_TRIPLEX, 1, Scalar(255, 0, 0));

			putText(img, "FONT_HERSHEY_COMPLEX_SMALL", Point(20, 300),
				FONT_HERSHEY_COMPLEX_SMALL, 1, Scalar(255, 0, 0));

			putText(img, "FONT_HERSHEY_SCRIPT_SIMPLEX", Point(20, 350),
				FONT_HERSHEY_SCRIPT_SIMPLEX, 1, Scalar(255, 0, 255));

			putText(img, "FONT_HERSHEY_SCRIPT_COMPLEX", Point(20, 400),
				FONT_HERSHEY_SCRIPT_COMPLEX, 1, Scalar(255, 0, 255));

			putText(img, "FONT_HERSHEY_COMPLEX_ITALIC", Point(20, 450),
				FONT_HERSHEY_COMPLEX | FONT_ITALIC, 1, Scalar(255, 0, 0));

			//imshow("img", img);
			waitKey();

		}

		void drawText2();
		{
			Mat img1(200, 640, CV_8UC3, Scalar(255, 255, 255));

			const String text = "Hello OpenCV";
			int fontFace = FONT_HERSHEY_TRIPLEX;
			double fontScale = 2.0;
			int thickness = 1;

			Size textSize = getTextSize(text, fontFace, fontScale, thickness, 0);
			Size sizeImg = img1.size();

			Point org((sizeImg.width - textSize.width) / 2,
				(sizeImg.height + textSize.height) / 2);

			putText(img1, text, org, fontFace, fontScale, Scalar(255, 0, 0), thickness);
			rectangle(img1, org, org + Point(textSize.width, -textSize.height),
				Scalar(255, 0, 0));

			//imshow("img1", img1);
			waitKey();

		}
		*/


/*
	img = imread("lenna.bmp");

	namedWindow("img");
	setMouseCallback("img", on_mouse);

	imshow("img", img);
	*/
	
	namedWindow("img");
	setMouseCallback("img", on_mouse);
	imshow("img", img);
	waitKey();
	return 0;
}

void on_mouse(int event, int x, int y, int flags, void*)
{
	switch (event)
	{
	case EVENT_LBUTTONDBLCLK:
		ptOld = Point(x, y);
		//p[cc] = Point(x, y);
		


		pts.push_back(Point(x, y));

		circle(img, Point(x, y), 5, Scalar(255, 0, 0), 1);

		if (pts.size() / 2 == 0)
		{
			line(img, pts[0], pts[1], Scalar(0, 0, 255), 2);
		}

	case EVENT_RBUTTONDBLCLK:
		line(img, pts[0], pts[2], Scalar(0, 0, 255), 2);
		/*
		if (cc == 2)
		{
			circle(img, p[cc], 5, Scalar(255, 0, 0), 1);
			line(img, p[0], p[1], Scalar(0, 0, 255), 2);
			line(img, p[1], p[2], Scalar(0, 0, 255), 2);
			line(img, p[2], p[0], Scalar(0, 0, 255), 2);
			cc = 0;
		}

		else
		{
			cc++;
		}
		*/
		/*
	case EVENT_LBUTTONDOWN:
		ptOld = Point(x, y);
		cout << "EVENT_LBUTTONDOWN: " << x << ", " << y << endl;
		break;


	case EVENT_LBUTTONUP:
		cout << "EVENT_LBUTTONUP: " << x << ", " << y << endl;
		break;

	case EVENT_MOUSEMOVE:
		if (flags & EVENT_FLAG_LBUTTON)
		{
			line(img, ptOld, Point(x, y), Scalar(0, 255, 255));
			imshow("img", img);
			ptOld = Point(x, y);
		}
		break;
		*/
		imshow("img", img);
	default:
		break;
	}
}

/*
	역행렬이 존재하는 일반적인 행렬이라면 가우스 소거법을 사용하는 DECOMP_LU를 사용할 수 있다. 이 값은 기본값으로 지정되어 있으므로 생략 가능
	역행렬이 존재하지 않는 경우 DECOMP_SVD를 지정하면 singulat value decomposiotion 방법을 이용하여 역행렬을 구할 수 있음

	reshape 함수 : reshape(변경 할 채널 수, 변경 할 행의 수) 채널 수 가 0이면 채널 변경 없음
	resize 함수 : resize(변경 할 행의 수, 빈공간을 채울 숫자)

	Vec 클래스 Matx클래스를 상속받아 만들어진 클래스, 열 개수가 1개로 특화된 벡터 표현 클래스
	Vec<uchar, 3> p1, p2(0, 0, 255);

	동영상 파일 저장
	int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X'); DivX MPEG-4 코덱
	int fourcc = VideoWriter::fourcc('X', 'V', 'I', 'D'); XVID MPEG-4 코덱

	VideoCapture cap(0); //카메라 장치 열기

	void line(inputOutputArray img, Point pt1, Point pt2, const Scalar& color, int thickness=1, int lineType=8, int shift=0);
	img : 선을 그릴 이미지
	pt1 : 선의 시작점
	pt2 : 선의 끝점
	color : 선의 색상(Scalar(B, G, R))
	thickness : 선의 두께
	lineType : 선의 종류(8, 4, CV_AA(antialiased))
	shift : 그리기 좌표값의 축소 비율(오른쪽 비트시프트(>>)연산) 디폴트값이 0

	void arrowedLine(inputOutputArray img, Point pt1, Point pt2, const Scalar& color, int thickness=1, int line_type=8, int shift=0, double tipLength=0.1);
	img : 화살표를 그릴 이미지
	pt1 : 화살표의 시작점
	pt2 : 화살표의 끝점
	color : 화살표의 색상(Scalar(B, G, R))
	thickness : 화살표의 두께
	lineType : 화살표의 종류(8, 4, CV_AA(antialiased))
	shift : 그리기 좌표값의 축소 비율(오른쪽 비트시프트(>>)연산) 디폴트값이 0
	tipLength : 화살촉의 길이(화살표 길이에 대한 비율)

	markerTypes
	0 = MARKER_CROSS
	1 = MARKER_TILTED_CROSS
	2 = MARKER_STAR
	3 = MARKER_DIAMOND
	4 = MARKER_SQUARE
	5 = MARKER_TRIANGLE_UP
	6 = MARKER_TRIANGLE_DOWN


	Size getTextSize(const String& text, int fontFace, double fontScale, int thickness, int* baseLine);
	text : 텍스트 문자열
	fontFace : 글꼴 종류
	fontScale : 글꼴 크기 배율
	thickness : 글꼴 두께
	baseLine : 텍스트의 기준선 위치를 반환할 변수에 대한 포인터 default = 0
	return : 텍스트의 크기(Size 객체)


*/


