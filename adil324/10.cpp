#include <iostream>
using namespace std;

class odd
{
	public :
		
	int m,n,i;
	
	void accept()
	{
		cout<<"Enter First Number : ";
		cin>>m;
		cout<<"Enter Second Number : ";
		cin>>n;
	}
	
	void display()
	{
		cout<<"\n\tAll Odds Numbers are : \n";
		
		for(i=1;i<=n;i++)
		{
			if(i%2!=0)
			{
			   cout<<"\t\t"<<i<<endl;
			}
		}
	}
};

int main()
{
	odd o;
	
	o.accept();
	o.display();
	return 0;
}
