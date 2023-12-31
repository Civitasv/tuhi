#include "tuhi/tuhi.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red = TGAColor(255, 0, 0, 255);

int main(int argc, char **argv)
{
	TGAImage image(100, 100, TGAImage::RGB);

	tuhi::Line(0, 0, 10, 10, image, white);

	// i want to have the origin at the left bottom corner of the image
	image.flip_vertically();
	image.write_tga_file("output.tga");
	return 0;
}
