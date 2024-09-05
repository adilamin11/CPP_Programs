#include<iostream>
using namespace std;
class father{
	protected:
		string surname="amin";
};
class son1:father{
	string name ="adil";
	public:
	void show(){
		cout<<name<<""<<surname<<endl;
	}
};
class son2:father{
	string name="seerat";
	
	public:
	void disp(){
		cout<<name<<" "<<surname<<endl;
	}
};
int main(){
	son1 obj;
    obj.show();
	
    son2 s2;
    s2.disp();
}