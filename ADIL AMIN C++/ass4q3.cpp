

#include<iostream>
using namespace std;
class media
{
	public:
		int b_id;
		string b_name;
		string publication;
		string author;
		double price;
		
		string cd_title;
		int cd_price;
	void print()
	{
		cout<<"This is media class";
	}
};

class book:public media
{
	public:
	void accept()
		{
			cout<<"Enter the book ID: "<<endl;
			cin>>b_id;
			cout<<"Enter the book name: "<<endl;
			cin>>b_name;
			cout<<"Enter the publication: "<<endl;
			cin>>publication;
			cout<<"Enter the book author: "<<endl;
			cin>>author;
			cout<<"Enter the book price: "<<endl;
			cin>>price;
		}
		
	void display()
	{
		cout<<"The ID of the book is: "<<b_id<<endl;
		cout<<"The name of the book is: "<<b_name<<endl;
		cout<<"The publication of the book is: "<<publication<<endl;
		cout<<"The author of the book is: "<<author<<endl;
		cout<<"The price of the book is: "<<price<<endl;
	}
};

class cd:public media
{
	public:
	void accept()
	{
	cout<<"Enter the CD title; "<<endl;
	cin>>cd_title;	
	cout<<"Enter the CD price: "<<endl;
	cin>>cd_price;
	}
	
	void display()
	{
		cout<<"The title of the CD is: "<<cd_title<<endl;
		cout<<"The price of the CD is: "<<cd_price<<endl;
	}
};

int main()
{
	book b;
	b.accept();
	b.display();
	cd c;
	c.accept();
	c.display();
	return 0;
}
