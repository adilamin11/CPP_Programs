#include<iostream>
using namespace std;
//private members
/*class A 
{
	int a;
	friend void display(A obj);
};
void display(A obj)
{
	obj.a=10;
	cout<<obj.a;
}
int main(){
	A obj;
	display(obj);
	return 0; 
}*/
class employee{
int id;
	int salary;
	friend void display(employee obj);
	
};
void display(employee obj)
{
	obj.id=122;
	obj.salary =9000;
	cout<<obj.salary<<endl<<obj.id;
}
int main(){
	employee obj;
	display(obj);
	return 0;
}