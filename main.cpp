#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

int main()
{
    /*
    Mat imgs[3];
    for (int i = 0; i < 3; i++)
    {
        String filename = format("img%d.jpg", i + 1);
        imgs[i] = imread(filename);

        imshow(filename, imgs[i]);
        waitKey();
    }
    
    Mat img1;
    //imshow("img1", img1);


    Mat img2(480, 640, CV_8UC1);
    Mat img3(480, 640, CV_8UC3);
    Mat img4(Size(640, 480), CV_8UC3);

    Mat img5(480, 640, CV_8UC1, Scalar(128));
    Mat img6(480, 640, CV_8UC3, Scalar(0, 0, 255));

    Mat mat1 = Mat::zeros(3, 3, CV_32FC1);
    Mat mat2 = Mat::ones(3, 3, CV_32FC1);
    Mat mat3 = Mat::eye(3, 3, CV_32FC1);

    float data[] = { 1, 2, 3, 4, 5, 6 };
    Mat mat4(2, 3, CV_32FC1, data);

    Mat mat5 = (Mat_<float>(2, 3) << 1, 2, 3, 4, 5, 6);
    Mat mat6 = Mat_<uchar>({ 2, 3 }, { 1, 2, 3, 4, 5, 6 });

    //mat4.create(256, 256, CV_8UC3);
    mat5.create(4, 4, CV_32FC1);

    cout << "mat1" << endl << mat1 << endl << endl << 
        "mat2" << endl << mat2 << endl << endl << 
        "mat3" << endl << mat3 << endl << endl;
    cout << "mat4" << endl << mat4 << endl;
    //mat4 = Scalar(255, 0, 0);
    //mat5.setTo(1.f);
    

    Mat img1 = imread("dog.bmp");   //dog 이미지 대입

    Mat img2 = img1;    //이미지1 이미지2에 대입 -> dog -> yellow
    Mat img3;
    img3 = img1;    //이미지1 이미지3에 대입 -> dog -> yellow

    Mat img4 = img1.clone();    //이미지4에 이미지1 clone -> dog -> 클론 데이터라 img1 변경에 영향 X
    Mat img5;
    img1.copyTo(img5);  //이미지5에 이미지1 copy -> dog -> 카피 데이터라 img1 변경에  영향 X

    img1.setTo(Scalar(0, 255, 255));    //이미지1 yellow로 설정
    img5 = ~img5;

    imshow("img1", img1);
    imshow("img2", img2);
    imshow("img3", img3);
    imshow("img4", img4);
    imshow("img5", img5);

    waitKey();
    destroyAllWindows();
    return 0;*/

    /*
    Mat img1 = imread("cat.bmp");



    Mat img2 = img1(Rect(220, 120, 340, 240));
    Mat img3 = img1(Rect(220, 120, 340, 240)).clone();

    img2 = ~img2;

    imshow("img1", img1);
    imshow("img2", img2);
    imshow("img3", img3);

    waitKey();
    destroyAllWindows();

    */
    /*
    Mat mat1 = Mat::zeros(3, 4, CV_8UC1);
    //cout << mat1 << endl;
    
    
    
    for (int j = 0; j < mat1.rows; j++)
    {
        uchar* p = mat1.ptr<uchar>(j);
        for (int i = 0; i < mat1.cols; i++)
        {
            p[i]++;
        }
    }
    cout << mat1 << endl;
    
    
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            mat1.at<uchar>(j, i)++;
        }
    }
    cout << mat1 << endl;
    */
    /*
    Mat matA = Mat::zeros(3, 4, CV_8UC1);
    for (int j = 0; j < matA.rows; j++)
    {
        for (int i = 0; i < matA.cols; i++)
        {
            matA.data[matA.cols * j + i];
        }
    }
    
    int j = 3;
    Mat matB = Mat::zeros(3, 4, CV_8UC1);
    uchar b = matB.data[matB.cols * j + 0];
    cout << b << endl;
    return 0;
    */

    Mat img1 = imread("lenna256.bmp", 0);


    img1.data[img1.cols * (img1.rows / 2) + (img1.cols / 2)] = 0;
    
    imwrite("test.bmp", img1);

    waitKey();
    return 0;
    

}


/*
Mat 클래스 : 행렬을 표현
한 개 이상의 채널을 가질 수 있음

Class Mat
{
public:
    Mat(int rows, int cols, int type);
    Mat(Size size, int type);
    Mat(int rows, int cols, const Scalar& s);
    Mat(Size size, int type, const Scalar& s);
    Mat(Size size, int type, Scalar& s);
    Mat(const Mat& m);
}
U: 부호없는 정수형
S: 부호있는 정수형 
F: 부동 소수형  
숫자는 비트  수

 #define CV_8U  unsigned char   
 #define CV_8S  signed char     
 #define CV_16U unsigned short  
 #define CV_16S signed short    
 #define CV_32S int
 #define CV_32F float
 #define CV_64F double
 #define CV_16F float16_t

 BGR 순서 세 개의 색상 성분을 가지고 있는 컬러 영상은 
 unsigned char 자료형을 사용하고 세 개의 채널을 가지고 있기 때문에 CV_8UC3 타입

 복소수처럼 두 개의 실수 값을 사용하는 행렬은 CV_32FC2 타입으로 만들 수 있음 

 Mat img(480, 640, CV_8UC3, Scalar(0, 0, 255)) => red

 Mat mat = Mat::eye(3, 3, CV_32FC1); => identity matrix

 float data[] = {1, 2, 3, 4, 5, 6};
 Mat mat(2, 3, CV_32FC1, data);
 => data의 값이 행부터 채움


Mat::setTo() 함수: 두 개의 인자를 가지고 있지만 두 번째 인자 mask는 기본값을 가지고 있으므로 생략가능


부분행렬 추출 주의사항 메모리를 공유한다
img = ~img : 반전이미지

 Mat::at() 함수
 mat1.at<uchar>(j, i)++;
 mat1은 0으로 초기화 된 3x4 행렬

 Mat mat1 - Mat::zeros(3, 4, CV_8UC1);

 matA.data[matA.cols*j + i];


*/


