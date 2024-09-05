#include<iostream>
using namespace std;
int main(){
	int marks[4] = {20,30,40,50};
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	int mathmarks[4];
	mathmarks[0]= 222;
	mathmarks[1]=334;
	cout<<mathmarks[2];
	//change value
//	marks[2]=445;
for(int i=0;i<4;i++)
{
	cout<<"the value of marks  "<<i<<"  is   "<<marks[i]<<endl;
}
//c++ pointer and array
int* p= marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
//cout<<"the value of *p is "<<*p<<endl; 
//cout<<"the value of *(p+1) is "<<*p+1<<endl;
//cout<<"the value of *(p+2) is "<<*p+2;  
}