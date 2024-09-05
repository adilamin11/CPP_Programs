#include<iostream>
using namespace std;
class student{
	int rollno;
	public:
		void accept()
		{
			cout<<"enter student rollno"<<endl;
			cin>>rollno;
		}
		void display()
		{
			cout<<"enter student rollno"<<rollno<<endl;
			
		}
};
class test : public student
{

int m1,m2;
public:
	void getmarks()
	{
		accept();
		cout<<"enter two subset marks";
		cin>>m1,m2;
	}
	void disp()
	{
		display();
		cout<<"enter two marks"<<m1,m2;
	}
};