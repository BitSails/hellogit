#include"LabOne.h"
#include<vector>
#include<iostream>
using namespace std;
int linearSearch(auto data,auto key);
int main()
{
LabOne ob1;
vector<LabOne>Vec;
ob1.setNum(1);
ob1.setDeci(54);
Vec.push_back(ob1);
ob1.setNum(2);
ob1.setDeci(43);
Vec.push_back(ob1);
ob1.setNum(3);
ob1.setDeci(34);
Vec.push_back(ob1);
ob1.setNum(4);
ob1.setDeci(12);
Vec.push_back(ob1);
cout<<Vec.size()<<endl;
for(int i=0;i<Vec.size();i++){
cout<<Vec[i].getNum()<<"."<<Vec[i].getDeci()<<endl;
}
linearSearch(auto data,auto num);
system("pause");
return 0;
}
int linearSearch(auto data,auto num)
{
for(int i=0;i<data.size();i++)
{
cout<<"Enter value to search"<<endl;
cin>>num;
if(data[i].getNum()==num)
{
cout<<"Value has been found"<<endl;
return i;
}
}
return -1;
}
