#pragma once

#include "tgaimage.h"

namespace tuhi
{
/// Draw a line using Bresenham's Line Drawing Algorithm.
void Line(int x0, int y0, int x1, int y1, TGAImage &image, const TGAColor &color);
}
