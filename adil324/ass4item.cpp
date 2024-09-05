#include<iostream>
using namespace std;
static float tprice,tdis;
 
 
class Item
{
  public:
  int id;
  string name;
  float price;

  
  	
  void accept()
  {
  	cout<<"\nEnter Item Id : ";
  	cin>>id;
  	cout<<"Enter Item Name : ";
  	cin>>name;
  	cout<<"Enter Item Price : ";
  	cin>>price;
  }
  
  void display()
  {
  	cout<<"\n\nItem Id is : "<<id;
  	cout<<"\nItem Name is : "<<name;
  	cout<<"\nItem Price is : "<<price;
  }
};

class Discount : public Item
{
   public:
   
   void accept1()
   { 	 
   	accept();
	tprice += price;   	 	 
   }	
   
   void display1()
   { 
   	  display();
   }
   
   static void totaldis()
   {
   	 int dis;
   	 cout<<"\n\nEnter Total Discount : ";
	 cin>>dis;
	 tdis = tprice * dis / 100 ;
	 cout<<"\nTotal Items Price is : "<<tprice;
	 cout<<"\nTotal Discount is : "<<tdis;
   }
};

int main()
{
	int n,i;
	
	cout<<"How Many Items You Want : ";
   	cin>>n;
   	  
	Discount d[n];
	
	 for(i=0;i<n;i++)
	 {
	 	d[i].accept1();
     }
     
    
     
   for(i=0;i<n;i++)
   {
   	   d[i].display1();
   }
   
   Discount::totaldis();

	
	return 0;
}
