#include <iostream>
using namespace std;

class worker
{
	string name;
	int no_hours,pay_rate;
	public:
		
    void accept()
    {
    	cout<<"\nEnter Worker Name is : ";
    	cin>>name;
    	cout<<"Enter Worker No_of_Hours Works : ";
    	cin>>no_hours;
	}
	
	void display()
	{
      cout<<"\n\nWorker Name is : "<<name;
   	  cout<<"\nWorker No_of_Hours Works is : "<<no_hours;
   	  
	}
	
	void cal(int pay_rate = 500)
	{
		int total;
		
		total = ( no_hours * pay_rate );
		
		cout<<"\nWorker Total Salary is : "<<total;
	}
};

int main()
{
	worker w[100];
	int n,i;
	
	cout<<"How Many Worker Details You Want : ";
	cin>>n;
	
	cout<<"\n\tEnter Workers Details : \n";
	
	for(i=0;i<n;i++)
	{
		w[i].accept();
	}
	
	cout<<"\n\tWorkers Details are : \n";
	
	for(i=0;i<n;i++)
	{
		w[i].display();
		w[i].cal();
    }
	
	
	return 0;	
}

