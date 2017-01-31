# include "Rectangle.h"


Rectangle:: Rectangle(){
width = 0;
height = 0.0;
}



int Rectangle::getWidth(){
return width;
}

void Rectangle::setWidth(int x){
width = x;
}

double Rectangle::getHeight(){
return height;
}

void Rectangle::setHeight(double y){
height = y;
}
