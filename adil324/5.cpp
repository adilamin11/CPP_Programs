#include<iostream>
using namespace std;

class over
{
   	public :
   		
    int volume(int a)
    {
    	return (a*a*a);
	}
	
	float volume(float r,int h)
	{
		return (3.14*r*r*h);
	}
	
	double volume(double s)
	{
		return (4*3.14*s*s*s)/3;
	}
};

int main()
{
	over o;
	int a,b,r,f;
	
	cout<<"\nEnter Cube Radius : ";
    cin>>r;
    cout<<"\nEnter Cylinder Radius & height : ";
    cin>>a>>b;
    cout<<"\nEnter Sphare Radius : ";
    cin>>f;
    
	cout<<"\nCube Volume is : "<<o.volume(r);
	cout<<"\nCylinder Volume is "<<o.volume(a,b);
	cout<<"\nSphare Volume is : "<<o.volume(f);
}