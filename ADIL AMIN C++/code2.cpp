
#include<iostream>
using namespace std;
//f(x)=x^2+2
int add(int a, int b)
{
	int c;
	c=a+b;
	return c;
}
int main(){
/*	int age;
	cout<<"enter your age"<<endl;
	cin >>age;
	switch (age)
	{
		case 12:
		cout<<"you are 12 years old";
		break;
		case 18:
		cout<<"you are 18 years old";
		break;
		default:
		cout<<"you are neither 12 nor 18 years old";
		break;
		int index = 0;
		while (index<34)
		{
			cout<<"we are at index number::"<<index<<endl;
			index = index +1;
		}
		int index =0;
		do {
		cout<<"we are at index number::"<<index<<endl;	
		index = index +1;
		
		}while(index <33);
		for(int i =30;i<34;i++)
		{
			cout<<"the value of i is"<<i<<endl;
		}*/
		
		int a,b;
		cout<<"enter the first number";
		cin>>a;
		cout<<"enter the second number";
		cin>>b;
		cout<<"the fun retured"<<add(a,b);
		
		return 0;
	}