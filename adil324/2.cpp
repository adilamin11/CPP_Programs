#include <iostream>
using namespace std;

class power
{
   public :
   	
   int b,p,i,sum;
   
   void accept()
   {
      cout<<"Enter the Base : ";
	  cin>>b;
	  cout<<"\nEnter the Power : ";
	  cin>>p;
   }   
   
   void display()
   {
   	 sum=1;
   	 
   	 for(i=1;i<=p;i++)
   	 {
   	    sum=sum*b;	
	 }
	 
	 cout<<"\nthe Base is : "<<b<<" & Power is : "<<p<< " = "<<sum;
   }
};

int main ()
{
	power f;
	
	 f.accept();
	 f.display();
			
	return 0;
}
