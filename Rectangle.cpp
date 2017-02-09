#include "Rectangle.h"
int linearSearch(auto data, auto key)//prototype
{
	for(int i=0; i< data.size(); i++)
	{
		if(data[i]==key)
			return i;
	}//endfor
	return -1;
}
void Rectangle::setLen(int l)
{
	length = l;
}
int Rectangle::getLen()
{
	return length;
}
void Rectangle::setWid(float w)
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
