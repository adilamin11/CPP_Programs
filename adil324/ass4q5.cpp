#include<iostream>
using namespace std;

class Shape
{
	public:
	float length,breadth,radius,height;
		
	void cir()
	{
		cout<<"Enter Circle Radius : ";
		cin>>radius;
	}
	
	void Rac()
	{
		cout<<"\n\nEnter Length : ";
		cin>>length;
		cout<<"Enter Breadth : ";
		cin>>breadth;
	}
	
	void trap()
	{
		cout<<"\n\nEnter Length : ";
		cin>>length;
		cout<<"Enter Breadth : ";
		cin>>breadth;
		cout<<"Enter Height : ";
		cin>>height;
	}
	
  	virtual void area() = 0;
};

class Circle : public Shape
{
	float total;
	public : 
	
	void area()
	{
		cir();
		
		total = 3.14 * radius * radius;
		
		cout<<"\nArea of Circle is : "<<total;
	}
};

class Rectangle : public Shape
{
	float total;
	public : 
	
	void area()
	{
		Rac();
		total = length * breadth ;
		
		cout<<"\nArea of Rectangle is : "<<total;
	}
};

class Trapezoid : public Shape
{
	float total,ttotal;
	public : 
	
	void area()
	{
		trap();
		total = length + breadth / 2 * height ;
		cout<<"\nArea of Trapezoid  is : "<<ttotal;
	}
};

int main()
{
	Circle c;
	Rectangle r;
	Trapezoid t;
	
	c.area();
	r.area();
	t.area();
	
	return 0;
}
