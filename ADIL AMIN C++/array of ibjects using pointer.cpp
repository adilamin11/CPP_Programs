#include<iostream>
using namespace std;
/*class shopitem{
	
	int id;
	float price;
	public:
		void setdata(int a ,float b){
			id =a;
			price=b;
			
		}
		void getdata(void){
			cout<<"code of this item is"<<id<<endl;
			cout<<"price of this item is"<<price<<endl;
		}
};
int main(){
	int size=2;
	//int *ptr =&size;
//	int *ptr =new int[23];
//general store
//veggies
//hardware
	shopitem *ptr=new shopitem[size];
	shopitem *ptrtemp = ptr;
	int p,i;
	float q;
	
	for(i=0;i<size;i++){
		cout<<" enter id and price of item "<<i+1;
		cin>>p>>q;
		ptr->setdata(p,q);
		ptr++;
	}
	for(i;i<size;i++)
	{
		cout<<"item number:"<<i+1<<endl;
		ptrtemp->getdata();
		ptrtemp++;
		
	}*/
	int main(){
		string name="adil";
		string* ptr=&name;
		cout<<name<<endl;
		cout<<&name<<endl;
		cout<<ptr<<endl; 
	
	
	return 0;
}