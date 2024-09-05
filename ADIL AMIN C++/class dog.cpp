#include<iostream>
using namespace std;
//base class
class animal{
	public:
		void eat(){
			cout<<"animal is eating"<<endl;
		}
		protected:
			void sleep(
			){
				cout<<"animal is sleeping"<<endl;
			}
			private:
				void breathe(){
					cout<<"animal is breathing"<<endl;
				}
};class dog :public animal{
	public:
		void bark(){
			cout<<"dog is barking"<<endl;
			
		}
};
int main(){
	dog d1;
	d1.eat();
	dog d2;
	d2.bark();
	return 0;
}