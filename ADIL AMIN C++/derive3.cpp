#include<iostream>
using namespace std;
class base{
	public:
		int x;
		
	
		class derive1 :  virtual public base{
		
	
		
			public:
				int y;
			}
		};
		class derive2 :base
		{
			public:
				int z;
		};
		class derive3 :  derive1,derive2{
		
		
			public:
				int multiplication;
				
					return x*y*z;
				
			};
				int main(){
					derive3 d;
					d.x=10;
					d.y=20;
					d,z=30;
					cout<<d.multiplication;
				}
		
