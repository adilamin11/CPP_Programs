#include<iostream>
using namespace std;
class base{
	string name;
	int eno;
	char gender;
	public:
		void accept()
		{
			cout<<"enter employee name";
			cin>>name;
			cout<<"enter employee eno";
			cin>>eno;
			cout<<"enter employee gender";
			cin>>gender;
		}
		void display()
		{
			cout<<"employee name"<<name<<endl;
			cout<<"employee eno"<<eno<<endl;
			cout<<"employee gender"<<gender<<endl;
		}

};
    class derive  : public base
{

	float salary;
	public:
		void  getsal()
		{
		
		
		accept();
		cout<<"enter employee salary"<<endl;
		cin>>salary;
}
void disp()
{


display();
cout<<"salary is:"<<salary<<endl;
   }
};

int main()
{
	derive d;
	d.getsal();
	d.disp();
}
