#include<iostream>
using namespace std;
class book
{
	int bookno;
	char bookname[20];
	char author[20];
	float price;
	public:
		void getdata();
		void display();
		
};
void book ::getdata()
{
	cout<<"enter book number=";
	cin >>bookno;
	cout<<"enter book name=";
	cin >>bookname;
	cout<<"enter author name=";
	cin>>author;
	cout<<"enter book price=";
	cin>>price;
}
void book :: display()
{
	cout<<"book number=="<<bookno<<endl;
	cout<<"book name=="<<bookname<<endl;
	cout<<"author =="<<author<<endl;
	cout<<"price=="<<price<<endl;
	
}
int main()
{
	book b;
	b.getdata();
	b.display();
}