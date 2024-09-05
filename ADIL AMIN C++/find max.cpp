#include<iostream>
using namespace std;
class max


	int a,b,c;
	public:
		max();

{
	cout<<"enter value for a ,b,c";
	cin a>>b>>c;
}
 max( int x,int y,int z ) 
 {
 	a = x;
 	b = y;
 	c = z;
 }
 max (max & M)
 {
 	a = m.a;
 	b = m.b;
 	c = m.c;
 }
 void findmax()
  {
  	if(a>b&& a>c)
  	return a;
  	else if(b>a && b>c)
  	return b;
  	else 
  	return c;
  	
  	
  };
  int main()
  {
  	max.ob1();
  	cout<<obj1.findmax();
  	max.ob2(3,20,40);
  	cout<<obj.2findmax();
  	max.ob3(obj1)
  	cout<<obj3.findmax();
  	
  }
  