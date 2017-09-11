#include<iostream>
#include<cmath>
using namespace std;


float diameter(float d,float a)
{
d=2*a;
return (d);
}

float area (float area,float a)
{
area=3.14*a*a;
return(area);
}

float circumferance(float c,float a){
c=2*3.14*a;
return (c);

}
int main()
{
float a,area,d,c;
cout<<"program to find find diameter, circumference and area of circle";
cout<<"\n \n enter the radius";
cin>>a;
d=2*a;
c=2*3.14*a;
area=3.14*a*a;
cout<<"diameter, circumference and area of circle "<<d<<c<<area;
return 0;
}
