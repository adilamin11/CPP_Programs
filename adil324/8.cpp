#include <iostream>
using namespace std;

class power
{
  public:
  
  double pow(double m,int n)
  { 
    int i,t=1;
    
    for(i=1;i<=n;i++)
    {
    	t = t * m;
	}
  	return t;
  }
  
  int pow(int m,int n)
  {
  	int i,t=1;
    
    for(i=1;i<=n;i++)
    {
    	t = t * m;
	}
  	return t;
  }
};
int main()
{


	power p;
	int b,t;
	
  	cout<<"Enter Base : ";
  	cin>>b;
  	cout<<"Enter Power : ";
  	cin>>t;
  
	
	cout<<"Base is : "<<b<<" & Power is : "<<t<<" = "<<p.pow(b,t);
	cout<<"\nBase is : "<<b<<" & Power is : "<<t<<" = "<<p.pow(b,t);
	
