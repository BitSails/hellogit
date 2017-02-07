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
cout<<"Enter a value to be searched"<<endl;
cin>>num;
while(key != 0)
{
num=linearSearch(data,key);
cout<<" "<<key<<"was";
if(num == -1)
cout<<"not found";
else
cout<<"found at index"<<num;
}
system("pause");
return 0;
}
int linearSearch(auto data,auto key)
{
for(int i=0;i<data.size();i++)
{
if(data[i].getNum()==num)
{
return i;
}
}
return -1;
}
