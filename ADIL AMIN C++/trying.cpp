#include<iostream>
#include<string>
using namespace std;
/*class student{
	private:
	int rollno;
	string name;
	public:
	

void accept(){
	cout<<"enter student details"<<endl;
	cout<<"enter student rollno"<<endl;
	cin>>
	rollno;
	cout<<"enter student name";
	cin>>name;
}
void display(){
	cout<<"students informatio is"<<endl;
	cout<<"rollno"<<rollno<<endl;
	cout<<"name"<<name<<endl;
    }
};
int main(){
	student student;
	cout<<"enter students details:\n";
	student.accept();
	cout<<"\n student details:\n";
	student.display();*/
	class employee{
		private:
		int age;
		string name;
		int  salary;
		public:
			
			void accept deatils(){
				cout<<"enter deatails of employee  "<<endl;
				cout<<"enter employee age  "<<endl;
				cin>>age;
				cout<<"enter employee name  "<<endl;
				cin>>name;
				cout<<"enter employee  salary  "<<endl;
				cin>>salary;
			}
				void display  details(){
					cout<<"employee deatails are "<<endl;
					cout<<"age"<<age<<endl;
					cout<<"name"<<name<<endl;
					cout<<"salary"<<salary<<endl;
				
			}
	};
	int main(){
		cout<<"enter employee deaaatils";
		employee deatils(20,s,20000);
		deatils.accept(); 
		deatils.display();
		return 0;
	}

