#include<iostream>
using namespace std;

class factors
{
	public:
	
	int n,i;
	
	void accept()
	{
		cout<<"Enetr Any Number : ";
		cin>>n;
	}
	void display()
	{
	  for (i=1;i<=n;i++)
	  {
	  	if(n%i==0)
	  	{
	  	cout<<i<<endl;
	    }
	  }
	}
	
};

int main()
{
	factors f;
	
	f.accept();
	f.display();
	
}
