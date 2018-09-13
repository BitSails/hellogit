#include <iostream>
#include <vector>
#include "Data.h"

using namespace std;

{
	
	vector<int> v1;
	vector<int> v2={5,8,22}
	v1.push_back(17);
	cout << "V2 has " << v2.size() << "elements" << endl;
	
	for (auto x:v2)
	{
		cout << x << endl;
	}
	
	Data d0;
	Data d1 = {7,24.83};
	d0.setX(15);
	d0.setY(3.14);
	
	vector<Data> v;
	v.push_back( {7,21.01} );
	v.push_back(d);
	d.setX(10);
	d.setY(12.10);
	v.push_back(d);
	
	for (auto a:v)
	{
		cout << a.getx() << " ";
		cout << a.getY() << endl;
	return 0;
	
}
