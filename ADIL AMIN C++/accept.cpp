#include<iostream>
using namespace std;
class Demo
{
	public:
string mystring;
   void print()
   {
   	cout<<mystring;
   }
};
int main()
{
	Demo obj;
	obj.mystring= "hello we are learning c++ pro";
	obj.print();
	return 0;
	}	


