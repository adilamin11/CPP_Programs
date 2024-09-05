#include<iostream>
using namespace std;
//class {derived class-name} : {visibility mode public:private: or protected}{{base class-name}
/*class emp{
	public:
	int id ;
	void setid(void){
		cout<<"enter your id";
	}
	void get_id(void){
		cout<<"id is:"<<id<<endl;
	}
};
class man :public emp{
	public:
	string name;
	void setname(void){
		cout<<"enter man name";
		
	}
	void get_name(void){
		cout<<"name is :"<<name;
	//	get_name();
	//	get_id();
	}
};
int main(){
emp obj;
obj.get_id();
man m1;
m1.get_name();
}*/  
class base{
	int data1;//private
	public:
		int data2;
		void setdata();
		int getdata1();
		int getdata2();
};
void base::setdata(void){
	data1 =20;
	data2 =30;
}
int base::getdata1(){
	return data1;
}
int base::getdata2(){
	return data2;
}
class derive: public base{//dervie publicy
	int data3;
	public:
		void process();
		void display();
};
void derive::process(){
	data3 =data2 * getdata1();
}
void derive ::display(){
	cout<<"value of data is:"<<getdata1()<<endl;
	cout<<"value of data is:"<<getdata1()<<endl;
	cout<<"value of data is:"<<getdata1()<<endl;
}
int main(){
	
}