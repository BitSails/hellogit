#include <iostream>
#include <vector>
#include "Rectangle.h"
using namespace std;

int main(){
Rectangle obj;
vector <Rectangle> Rect;

obj.setHeight(4.01);
obj.setWidth(3);
Rect.push_back(obj);
obj.setHeight(5.01);
obj.setWidth(6);
Rect.push_back(obj);
obj.setHeight(7.01);
obj.setWidth(8);
Rect.push_back(obj);
obj.setHeight(2.01);
obj.setWidth(4);
Rect.push_back(obj);

for(int i = 0; i < Rect.size();i++){
cout << Rect[i].getHeight() << endl;
cout << Rect[i].getWidth() << endl;
}
system("pause");

return 0;
}
