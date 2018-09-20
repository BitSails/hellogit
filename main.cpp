#include <iostream>
#include <vector>
#include "Data.h"

using namespace std;

void print (auto A)
{
	for (auto a : A)
	cout << a << " ";
	
	cout<<endl;
}
	

void insertionSort (auto& D)
{
	for (int i=1; i < D.size(); i++)
	{
		int j=i;
		while (j > 0 and D[j] < D[j-1])
		{
			swap (D[j], D[j-1]);
			j--;
		}
		print(D);
		
	}
}

int main()


{
	
	vector<int> v1;
	vector<int> v2={22,8,7,9,45};
	v1.push_back(17);
	
	vector <int> w = {7, 4, 2, 19, 31, 11};
	
	insertionSort(w);
	
	for (auto i:w)
	{
		cout << i << " ";
	}
	
	
	cout <<endl<<endl<<endl;
	
	cout << "V2 has " << v2.size() << " elements. They are:" << endl<<endl;
	
	for (auto x:v2)
	{
		cout << x << endl;
	}
	
	cout << endl;
	
	Data d0;
	Data d1 = {7,24.83};
	d0.setX(15);
	d0.setY(3.14);
	
	vector<Data> v;
	v.push_back( {7,21.01} );
	Data d;
	v.push_back(d);
	d.setX(10);
	d.setY(12.10);
	v.push_back(d);
	
	cout <<endl<<"The Vector V of type Data contains: "<< endl<<endl;
	
	
	
	for (auto a:v)
	{
		cout << a.getX() << " ";
		cout << a.getY() << endl<< endl;
		
		//insertionSort(v);
	}
	return 0;
	
}
