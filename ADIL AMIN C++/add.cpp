#include<iostream>
using namespace std;
/*using namespace std;
class add{
	int a,  b,c;
	public:
		void input()
		{
		
		cout<<"enter two number";
		cin>>a>>b;
		}
		void process()
		{
	
		
	c=a+b;
	cout<<"add  is"<<a+b;
		}
};
int main(){
	add obj;
	obj.input();
	obj.process();
}*/
class car{
	public:
		public void car(){
			cout<<"\nthis is car";
		}
};
class maruti:public car{

	public:
		void maruti(){
			cout<<"this is maruti car";
		}
};
class maruti800 :public maruti{
	public:
		void maruti800(){
			cout<<"this is maruti800";
		}
};
int main(){
	maruti800 m8;
	m8.void car();
	m8.void maruti();
	m8.void maruti800();
	return 0;
}