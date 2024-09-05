#include<iostream>
using namespace std;

class A
{
	int a;
	friend void display(A obj);
	
};
void display (A obj)
{
	obj.a =10;
	cout<<obj.a;
}
int main()
{
	A obj;
	display(obj);
	return 0;
	
	
}