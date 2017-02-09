#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
		int length;
		float width;
	public:
		Rectangle();

		void setLen(int);
		int getLen();
		void setWid(int);
		float getWid(float);
};
#endif
