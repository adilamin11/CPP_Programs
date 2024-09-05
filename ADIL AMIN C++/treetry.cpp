#include<iostream>
using namespace std;
class student{
	public:
	int rno;
	string name;
	void getdata()
	{
		cout<<"enter the student r no";
		cin>>rno;
		cout<<"enter student name";
		cin>>name;
	}
	void display(){
		cout<<"rno"<<rno<<endl;
		cout<<"name"<<name<<endl;
	}
	
};
int main(){
	student obj;
	obj.getdata();
	obj.display();
/*	int main(){
		int i;
		
		for(i=0;i<5;i++)
		cout<<"i";*/
		
	
	return 0;
}