#include<iostream>
using namespace std;
class number2;
class number1{

private:
	int value;
	public:
		number1(int val):value (val){}
		friend int subtract (number1 num1,number2 num2);
	};
	class number2{
		private:
			int value;
			public:
				number2(int val):value(val){}
				friend int subtract(number1 num1,number2 snum2);
				
			};
	int subtract (number1 num1,number2 num2){
		return num1.value - num2.value;
	}
	int main(){
		number1 num1(10);
		number2 num2(5);
		int result = subtract(num1,num2);
		cout<<"result:"<<result<<endl;
		return 0;
	}