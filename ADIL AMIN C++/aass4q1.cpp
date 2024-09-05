#include<iostream>
using namespace std;
class item{
	protected:
	int item_id;
	string item_name;
	int price;
	public:
		void accept (){
			cout<<"enter id "<<endl;
			cin>>item_id;
			cout<<"enter item name"<<endl;
			cin>>item_name;
			cout<<"enter price";
			cin>>price;
		}
		void display(){
			cout<<"item "<<item_id;
			cout<<"name"<<item_name;
			cout<<"price"<<price;
		}
};
/*class discout :item{
	int discount;
	public:
		void discount(){
			cout<<"enter discount"<<endl;
			cin>>discount;
		}
};*/
int main(){
	item i1;
	i1.accept();
	i1.display();
// 	i1.discount();
}
