#include <iostream>
using namespace std;

class second
{
  public:
 int h,m,s;
 
 void accept()
 {
 	cout<<"Enter time (HH:MM:SS) follow this Format : ";
 	cin>>h>>m>>s;
 }
	
  void display()
  {
  	int t;
  	
    t=((h*60*60)+(m*60)+s);
    
    cout<<"\nTotal Second Is : "<<t;
  }
};
 
  int main()
  {
  	second f;
  	
  	f.accept();
  	f.display();
  		
  	return 0;
  }
