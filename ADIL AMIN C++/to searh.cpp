#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		string  student_name;
		string city;
		string mob_no;
		
};
int main(){
	student students[10]
	//accept information of 10 persons
	for(int i=0;i<10;i++){
		cout<<"enter details of student"<<i+1<<endl;
		cout <<"student name:";
		cin.ignore();
		getline(cin,student[i].student_name]);
		cout <<"city";
		getline(cin,student[i].city);
		cout<< "mobile no:";
		cin>>student[i].mob_no;
	}
	//diplay information of 10 student
	string searchstudentname;
	cout <<"enter person name to search mobile number";
	cin.ignore();
	getline(cin,searchstudentname);
	for(int i=0;i<10;i++){
		if(student[i].student_name==searchstudentname){
		
		cout<<"mobile number of"<<searchstudentname<<"is:"<<student[i].mob_no<<endl;
		break; 
		
	}
}
//serach stuent deatilsof a given number
string searchmob_no;
cout <<"enter mobile number to search deatils";
cin>> searchmob_no;
for(int i =0;i<10;i++){
	if(student[i].mob_no==searchmob_no){
		cout<<"details of the person with mobile number"<<searchmob_no<<"are:\n";
		cout<<"name"<<student[i].student_name<<endl;
		cout<<"city:"<<student[i].city<<endl;
		
	}
}
return 0;
}
