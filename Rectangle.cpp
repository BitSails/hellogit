#include "Rectangle.h"

void Rectangle::setLen(int l)
{
	length = l;
}
int Rectangle::getLen()
{
	return length;
}
void Rectangle::setWid(float w);
{
	width = w;
}
float Rectangle::getWid()
{
	return width;
}
Rectangle::Rectangle()
{
	length = 0;
	width =0.0;
}
