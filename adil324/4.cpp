#include <iostream>
using namespace std;

class interest
{
	public:
		
	int p,r,n,t,a;
	
	void accept()
	{
		cout<<"Enter The Principle : ";
		cin>>p;
		cout<<"\nEnter Interest Rate : ";
		cin>>r;
		cout<<"\nEnter the year : ";
		cin>>n;
		cout<<"\nEnter The Time of Year : ";
	    cin>>t;
	}
	
	inline void simple()
	{
		int s;
		
		s=p*r*n/100;
		
		cout<<"\nThe Simple Interest is : "<<s;
	}
	
	inline void compound()
	{	  
	  a=p*1+r/n*n*t;
	  
	  cout<<"\nThe Compound Interest is : "<<a;
  		
	}
};

int main()
{ 
    interest i;
    
    i.accept();
    i.simple();
    i.compound();
    
	return 0;
}
