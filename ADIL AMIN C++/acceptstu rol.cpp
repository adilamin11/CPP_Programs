#include<iostream>
using namespace std;
int main(){
	int numstudents;
	cout<<"enter the number of students";
	cin>>numstudents;
	for(int i=0;i<=numstudents;i++)
	{
		int rollno;
		string name;
		cout<<"enter students"<<i<<"rollno:";
		cin>>rollno;
		cout<<"enter students"<<i<<"name:";
		cin>>name;
		
	}
	cout<<"total numbers of students in class"<<numstudents<<endl;
	return 0;
}
