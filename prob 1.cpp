#include<iostream>
#include<cmath>
using namespace std;
float cube(float a)
{
float cu;
cu=a*a*a;
return (cu);
}
int main()
{
float a,cu;
cout<<"program to find cube of any number";
cout<<"\n \n enter a number";
cin>>a;
cu=cube(a);
cout<<"cube of number "<<cu;
return 0;
}
