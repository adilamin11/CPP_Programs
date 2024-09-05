#include<iostream>
using namespace std;
//base class new class ko gabim de
class employee{
	int id;
	public:
	float salary;
	//public:
		employee(int inpid){
			id = inpid;
			salary =34000;
		}
		
};
//derive class
/*class {{derived-class-name}}: {{visibility-mode}} {{base-class-name}}
{
	class member etc
	note:
	default visibility mode is private
	2.public visibility mode:public member of the base class becomes public member of the drived class
	private visibility mode:public member of the base class becomes private member of the drived clas
}*/
class programer : employee{
	public:
	int languagecode =9;
};
//create  a program class 
int main(){
	employee adil(1),farhan(2);
	cout<<adil.salary<<endl;
	cout<<farhan.salary<<endl; 
	
	return 0;
}