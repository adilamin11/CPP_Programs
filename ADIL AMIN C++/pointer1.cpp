
#include<iostream>
using namespace std;

/*pointers are veriables that stores address of another veriable
//int a =3;
//int* b =&a;
//&--->adress of opertator 
//cout<<"the adress of a is:"<<b;

int a =10;
int* aptr=&a;

cout<<*aptr<<endl;
*aptr=20;
cout<<a<<endl;
//code with harry

pointers to objects

*/
class complex{
	int real,imaginary;
	
	public:
	void getdata(){
		cout<<"the real part is "<<real<<endl;
		cout<<"the imaginer part is "<<imaginary<<endl;
	}	
	void setdata(int a,int b){
		real =a;
		imaginary=b;
	}
};
  int main(){
  
  
  
//	complex c1;
	//complex *ptr =&c1;
	complex *ptr =new complex;
//	(*ptr).setdata(1,23); is exactly same as
    ptr->setdata(1,34);
	//(*ptr).getdata();
	ptr->getdata();
	//array of object
	complex *ptr1 = new complex[4];
	ptr->setdata(1,4);
	ptr->getdata();

return 0;
}