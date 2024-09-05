#include<iostream>
using namespace std;

class emp{
	string ename;
	string desi;
	public:
		void accept()
		{
			cout<<"enter employee information :"<<endl;
			cout<<"employee name :"<<endl<<"designation:"<<endl;
			cin>>ename>>desi;
		}
		void display()
		{
			cout<<"employee details are :"<<endl;
			cout<<ename<<endl<<desi<<endl;
			
		}
};
class empsal : public emp
{
	float salary;
	public:
	void getsal()
	{
		accept();
		cout<<"enter salary :"<<endl;
		cin>>salary;
	}
	void disp()
	{
		display();
		cout<<salary;
	}
};
int main()
{
	empsal obj;
	obj.getsal();
	obj.disp();
	return 0;
}