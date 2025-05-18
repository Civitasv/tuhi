#include "tuhi/tuhi.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red = TGAColor(255, 0, 0, 255);

int main(int argc, char **argv)
{
	TGAImage image(100, 100, TGAImage::RGB);

	printf("Drawing Line...\n");
	tuhi::Line(0, 0, 100, 10, image, white);
	printf("Finish...\n");

	// i want to have the origin at the left bottom corner of the image
	image.flip_vertically();
	image.write_tga_file("output.tga");
	return 0;
}
