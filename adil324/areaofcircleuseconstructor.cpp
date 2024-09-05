#include <iostream>
using namespace std;

/*class Area
{
   int radius;
   float pi,area;
   public:
   
   
   void accept()
   {
   	 cout<<"Enter The Radius : ";
     cin>>radius; 	
   }
   Area(float p = 3.14)
   {
   	  pi = p;
   }
   
   void display()
   {  	
   	 area = (pi * radius * radius);
   	cout<<"\nArea Of Circle is : "<<area;
   }
};
int main()
{
  /*	int radius;
  	
  	cout<<"Enter The Radius : ";
  	cin>>radius;
  	
  	Area a;
  	a.accept();
  	a.display();  */
  	
  	class circle{
  		
  		float r,area;
  		public:
  		void cal(float a,float pi=3.14)
  			{
  				r=a;
  				area=pi*r*r;
  				cout<<"\n area of circle is:  "<<area;
			  }
	  };
	  int main(){
	  	float r;
	  	cout<<"\n enter radius  ";
	  	cin>>r;
	  	circle obj;
	  	obj.cal(r);
	  
	return 0;
}
