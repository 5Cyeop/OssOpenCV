#include <iostream>
#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

void on_mouse(int event, int x, int y, int flags, void*);

Mat img(800, 800, CV_8UC3, Scalar(255, 255, 255));
Point ptOld;
vector <Point> pts;

int main()
{
	namedWindow("img");
	imshow("img", img);
	setMouseCallback("img", on_mouse);
	waitKey();
	return 0;
}

void on_mouse(int event, int x, int y, int flags, void*)
{
	switch (event)
	{

		case EVENT_LBUTTONDOWN:
		{
			ptOld = Point(x, y);

			if (pts.size() >= 3 && !pts.empty() && norm(pts.front() - pts.back()) == 0)
			{
				pts.clear();
				img = Scalar(255, 255, 255);
			}

			pts.push_back(ptOld);

			circle(img, ptOld, 6, Scalar(255, 0, 0), 1, LINE_AA);

			if (pts.size() >= 2)
			{
				line(img, pts[pts.size() - 2], pts.back(), Scalar(0, 0, 255), 2, LINE_AA);
			}
			break;
		}



		case EVENT_RBUTTONDOWN:
		{
			if (pts.size() >= 3)
			{
				line(img, pts.back(), pts.front(), Scalar(0, 255, 0), 2, LINE_AA);

				vector<vector<Point>> fillpts;
				fillpts.push_back(pts);

				fillPoly(img, fillpts, Scalar(0, 255, 255), LINE_AA);
			}
			break;
		}

		default:
			break;
	}

	imshow("img", img);
}