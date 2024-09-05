#include<iostream>
using namespace std;
/*class employee{
	int id;
	int salary;
	public:
	void setid(void){
		salary=322;
		cout<<"enter employee id"<<endl;
		cin>>id;
		cout<<"enter emp salary"<<endl;
		cin>>salary;
	}
	void getid(void){
		
		cout<<"the id of employee "<<id<<endl;
		cout<<"the salary is "<<salary<<endl;
	}
};
int main(){
//	employee adil,zaid,asif,akil;
//	adil.setid();
//	adil.getid();
employee fb[4];
for(int i=0;i<4;i++)
{

fb[i].setid();
fb[i].getid();
	return 0;
}
}*/
class complex{
	int a;
	int b;
	public:
	void setdata(int v1,int v2){
		a = v1;
		b=v2;
	}
	void setdatabysum(complex o1,complex o2){
		a =o1.a + o2.a;
		b =o1.b + o2.b;
	}
	void printnumber(){
		cout<<"your com no is"<<a<<"+i"<<b<<endl;
	}
};
int main(){

complex c1,c2,c3;
c1.setdata(1,2);
c1.printnumber();
c2.setdata(2,3);
c2.printnumber();
c3.setdatabysum(c1,c2);
c3.printnumber();
}