#include <iostream>
using namespace std;

class area
{
	public:	
	
	inline  float circle(int a)
	{
		return (3.14*a*a);
	}
	
	inline int square(int b)
	{
		return (b*b);
	}
	
	inline int ractangle(int x , int y)
	{
		return (x*y);
	}
};

int main()
{
	area a;
	
	int r,l,w,s;
	
		cout<<"Enter Circle of Radius : ";
		cin>>r;
	    cout<<"\nEnter Square of Radius : ";
		cin>>s;
		cout<<"\nEnter the Ractangle Length & Width : ";	
		cin>>l>>w;

	cout<<"\nArea of Circle is : "<<a.circle(r);
	cout<<"\nArea of Square is : "<<a.square(s);
	cout<<"\nArea of Ractangle is : "<<a.ractangle(l,w);
	
	return 0;
}
