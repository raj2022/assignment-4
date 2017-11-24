#include <iostream>
using namespace std;
int strong(int j)
{ 
  int temp=t;
  int i,f,r;
  int sum=0;
  while(temp>0)
  {
      i=1,f=1;
      r=temp%10;
      while(i<=r)
      {
        f=f*i;
        i++;
      }
      sum=sum+f;
      temp=temp/10;
  }
  if(sum==t)
    return 0;
  else 
    return 1;
}
int main()
{
  int num1=0,num2=0;
  cout<<"\nProgram to print strong numbers in a given interval.";
  cout<<"\nENTER THE LOWER LIMIT: ";
  cin>>num1;
  cout<<"\nENTER THE UPPER LIMIT: ";
  cin>>num2;
  int t=num1;
  cout<<endl<<endl;
  while(t<=num2)
  {
  int count1=strong(j);
  if(count1==0)
    cout<<"\n"<<t<<" is a strong number.";
  t++;
  }
  return 0;
}
