#include <iostream>
using namespace std;

class Media
{
	int m_id;
	string m_name,m_address;
	public:
		
	void accept ()
	{
		cout<<"\n\nEnter Media id : ";
		cin>>m_id;
	    cout<<"Enter Media Name : ";
	    cin>>m_name;
	    cout<<"Enter Media address : ";
	    cin>>m_address;
	}
	
	void display()
	{
		cout<<"\n\nMedia id is : "<<m_id;
		cout<<"\nMedia Name is : "<<m_name;
		cout<<"\nMedia Address is : "<<m_address;
	}
	
};

class Book : public Media
{
   int b_id;
   string b_name,b_publication,b_author;
   float b_price;
   public:
   	
   void accept1()
   {
   	  accept();
   	  cout<<"Enter Book Id : ";
   	  cin>>b_id;
   	  cout<<"Enter Book Name : ";
   	  cin>>b_name;
   	  cout<<"Enter Book Publication : ";
   	  cin>>b_publication;
   	  cout<<"Enter Book Author : ";
   	  cin>>b_author;
   	  cout<<"Enter Book Price : ";
   	  cin>>b_price;
   }
   
   void display1()
   {
   	 display();
   	 cout<<"\nBook Id is : "<<b_id;
   	 cout<<"\nBook Name is : "<<b_name;
   	 cout<<"\nBook Publication is : "<<b_publication;
   	 cout<<"\nBook Author is : "<<b_author;
   	 cout<<"\nBook Price is : "<<b_price;
   }
   	
};

class CD : public Media
{ 
  string title;
  float price;
  public:
  
  void accept2()
  {
  	accept();
  	cout<<"Enter CD Title : ";
  	cin>>title;
  	cout<<"Enter CD Price : ";
  	cin>>price;
  }
  
  void display2()
  {
  	display();
  	cout<<"\nCD Title is : "<<title;
  	cout<<"\nCD Price is : "<<price;
  }
	
};

int main ()
{
	Book b;
	
	b.accept1();
	b.display1();
	
	CD c;
	
	c.accept2();
	c.display2();
	
	return 0;
}
