#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

int main()
{
	cout << "Hello OpenCV" << CV_VERSION << endl;

	Mat img;
	img = imread("lenna.bmp");


    /*
	if (img.empty())
	{
		cerr << "Image load failed!" << endl;
		
		return -1;
	}

	namedWindow("image");
	namedWindow("image2");

	imshow("image", img);
	imshow("image2", img);

	waitKey();
	destroyWindow("image");

	waitKey();
	destroyWindow("image2");
    */
	return 0; 
}

/*
int main() {
    // cv::Size 객체 생성 (width=640, height=480)
    Size sz1, sz2(640, 480);

    // 너비와 높이 출력
    cout << "Width: " << sz1.width << endl;
    cout << "Height: " << sz1.height << endl;

    // 크기를 변경
    sz1.width = 800;
    sz1.height = 600;

    cout << "Changed Width: " << sz1.width << endl;
    cout << "Changed Height: " << sz1.height << endl;

    // 다른 cv::Size 객체와 연산 예시
    Size sizeSum = sz1 + sz2;  // 너비와 높이를 각각 더함
	Size sizeMul = sz1 * 2;

    std::cout << "Sum Width: " << sizeSum.width << std::endl;
    std::cout << "Sum Height: " << sizeSum.height << std::endl;

    cv::waitKey(0);

    return 0;
}


#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // cv::Point 객체 생성 (x=100, y=200)
    cv::Point pt1(100, 200);

    // 좌표 출력
    std::cout << "Point 1: (" << pt1.x << ", " << pt1.y << ")" << std::endl;

    // 좌표 변경
    pt1.x = 150;
    pt1.y = 250;

    std::cout << "Changed Point 1: (" << pt1.x << ", " << pt1.y << ")" << std::endl;

    // 두 점을 더하기 (각 좌표별로 더해짐)
    cv::Point pt2(50, 50);
    cv::Point ptSum = pt1 + pt2;

    std::cout << "Sum Point: (" << ptSum.x << ", " << ptSum.y << ")" << std::endl;

    // 이미지 위에 점 그리기
    cv::Mat img(400, 400, CV_8UC3, cv::Scalar(255, 255, 255)); // 흰색 배경 이미지

    // pt1 위치에 빨간 점 그리기 (반지름 5, 두께 -1은 채우기)
    cv::circle(img, pt1, 5, cv::Scalar(0, 0, 255), -1);

    // ptSum 위치에 파란 점 그리기
    cv::circle(img, ptSum, 5, cv::Scalar(255, 0, 0), -1);

    cv::imshow("Points", img);
    cv::waitKey(0);

    return 0;
}

#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Rect 객체 생성 (왼쪽 위 꼭짓점 (50,50), 너비 200, 높이 100)
    cv::Rect rect1(50, 50, 200, 100);

    std::cout << "Rect1 x: " << rect1.x << ", y: " << rect1.y << std::endl;
    std::cout << "Rect1 width: " << rect1.width << ", height: " << rect1.height << std::endl;

    // Rect의 오른쪽 아래 꼭짓점 좌표 출력
    std::cout << "Rect1 bottom-right: (" << rect1.br().x << ", " << rect1.br().y << ")" << std::endl;

    // Rect의 중심 좌표 구하기
    cv::Point center = (rect1.tl() + rect1.br()) * 0.5;
    std::cout << "Rect1 center: (" << center.x << ", " << center.y << ")" << std::endl;

    // Rect를 이미지 영역으로 사용해서 ROI 만들기
    cv::Mat img = cv::imread("your_image.jpg");  // 이미지 불러오기
    if (img.empty()) {
        std::cout << "이미지를 찾을 수 없습니다!" << std::endl;
        return -1;
    }

    // ROI 영역 지정
    cv::Mat roi = img(rect1);

    // ROI에 빨간색 테두리 그리기
    cv::rectangle(img, rect1, cv::Scalar(0, 0, 255), 2);

    cv::imshow("Image with Rect", img);
    cv::imshow("ROI", roi);

    cv::waitKey(0);
    return 0;
}
*/

//RotatedRect(중심, 사이즈, 각도)
//boundingRect() 돌아가는 사각형에 해당하는 전체범위 사각형

/*
String 클래스
 
String format(const char* fmt ...)
ex) Mat imgs[3];
for (int i = 0; i < 3; i++)
{
    String filename = format("dddddd.bmp", i + 1);
    imgs[i] = imread(filename);
}

imshow("img5", img5);
waitKey()

*/