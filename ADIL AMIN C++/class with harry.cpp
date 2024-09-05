#include<iostream>
using namespace std;
class employee
{
	public:
		string name;
		int salary;
};
int main(){
	employee adil;
	adil.name = "adil amin";
	adil.salary = 100000;
	cout<<"the name of first employee is  "<<adil.name<<"  and his salary is = "<<adil.salary<<endl;
	return 0;
}
/*	class employee{
		public:
			string name;
			int salary;
			
			int main(){
			
			employee(string n,int s)
			
				this->name = n;
				this->salary = s;
			
			
			{
				cout<<"the name of first employee is  "<<this->name<<"  and his salary is = "<<this->salary<<endl;
				return 0;
			}*/
			
			
	
	
