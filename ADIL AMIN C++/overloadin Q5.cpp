#include<iostream>
using namespace std;
class demo
{
	int a,b,c;
	public:
	void add(int a,int b) 
	{
	
		cout<<a+b;
	}
     void add(int a,int b,int c)
     {
	 
     
     	cout<<a+b+c;
        
		 }
	 };
	 
	 int main()
	 {
	 	demo obj;
	 	obj.add(10,20);
	 	obj.add(2,3,5);
	 
	 }
	 