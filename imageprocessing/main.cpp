#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;

int main(int argc, char** argv)
{
	Mat src, src_gray, src_bw;

	// Load an image
	src = imread(argv[1], 1);

	// Convert the image to Gray
	cvtColor(src, src_gray, CV_RGB2GRAY);

	// Convert the image to Bitonal
	threshold(src_gray, src_bw, 0, 255, CV_THRESH_OTSU);

	// Save the bitonal image
	imwrite(argv[2], src_bw);

	return 0;
}