#include<iostream>
using namespace std;
     // inline int product(int a,int b){
	//return a*b;
//	static int c=0 ;this excute only once
	//c=c+1;//next time this fun is run ,the valye of c will be retained
	//return a*b*c;
//}
float moneyrecived(int currentmoney,int factor=1.04){s
	return currentmoney * factor;
}
int main(){
	int a,b;
	cout<<"enter the value of a and b";
	cin>>a>>b;
/*	cout<<"the product of a and b "<<product(a,b)<<endl;
	cout<<"the product of a and b "<<product(a,b)<<endl;
	cout<<"the product of a and b "<<product(a,b)<<endl;
    cout<<"the product of a and b "<<product(a,b)<<endl;
    cout<<"the product of a and b "<<product(a,b)<<endl;*/
    int money =10000;
cout <<"if you have "<<money<<"rs in ur account,u will recive"<<moneyrecived(money)<<"rs after 1year";
cout<<"for vip :if you hVE "<<"RS IN YOU bank acc,you will recive"<<moneyrecived(money,10)<<"rs afet 1year";
return 0;

}