#include<iostream>
using namespace std;
class emp
{
	int eno;
	string name;
	int salary;
	public:
		void accept()
		{
			cout<<"enter employee eno";
			cin>>eno;
			cout<<"enter  eemployee name";
			cin>>name;
			cout<<"enter emmployee salary";
			cin>>salary;
		}
		void display()
		{
			cout<<"employee eno"<<eno<<endl;
			cout<<"employee name"<<name<<endl;
			cout<<"employee salary"<<salary<<endl;
		}
};
int main()
{
	emp d;
	d.accept();
	d.display();
	return 0;
}