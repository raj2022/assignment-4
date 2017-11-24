#include <iostream>
using namespace std;
int prime(int a)
{ 
  int count=0;
  int num=a;
  for(int i=2;i<tnum;i++)
  {
   if(tnum%i==0)
   count++;
  }
  return count;
}
int main()
{
  int num1=0,num2=0;
  cout<<"\nProgram to print prime numbers in a given interval.";
  cout<<"\nENTER THE LOWER LIMIT: ";
  cin>>num1;
  cout<<"\nENTER THE UPPER LIMIT: ";
  cin>>num2;
  int a=num1;
  cout<<endl<<endl;
  while(a<=num2)
  {
  int count1=prime(a);
  if(count1==0)
    cout<<"\n"<<a<<" is a prime number.";
  a++;
  }
  return 0;
}
