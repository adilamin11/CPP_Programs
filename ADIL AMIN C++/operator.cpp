#include<iostream>
using namespace std;
class counter{
	
	int x,y,z;
	public:
		counter(int a,int b,int c)
		{
			x =a;
			y= b;
			z = c;
		}

void display(){
	cout<<x<<y<<z<<endl;
}
void operator -()
{
	x= -x; 
	y = -y;
	z = -z;
    }
};
int main()
{
	
	counter c1(10,20,30);
	c1.display();
	//
//	-c1();//boj operator;
	c1.display();//update value
	return 0;
}