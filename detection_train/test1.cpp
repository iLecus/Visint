#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;

void EnumerateCameras()
{
	Mat img = imread("C:\\Users\\Administrator\\Pictures\\98486.jpg");
	
	// 在窗口中显示游戏原画
	
	// 等待6000 ms后窗口自动关闭
	

	system("pause");

}

int main()
{
	
	EnumerateCameras();

	return 0;
}
