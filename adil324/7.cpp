#include <iostream>
using namespace std;

void smalltozero(int &a , int &b)
{
	if(a<b)
	{
	  a = 0;
	  cout<<"First Number is : "<<a;
	}
	else 
	{
	  b = 0;
	  cout<<"Second Number is : "<<b;
	}
}
int main()
{
   int x,y;
   
   cout<<"Enter First Number : ";
   cin>>x;
   cout<<"Enter Second Number : ";
   cin>>y;
   
   smalltozero(x,y);
}
   