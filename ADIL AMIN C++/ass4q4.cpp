

#include<iostream>
using namespace std;
class conversion
{	
	public:
	int gm;
	int kg;
	int ml;
	int l;
	int rs;
	int ps;
//	int convert;
};

class weight:public conversion
{
	public:
	void accept()
	{
		cout<<"Enter the weight in gram: "<<endl;
		cin>>gm;	
		float convert = gm*0.001;
		cout<<"Weight converted from gram to Kg: "<<convert<<"kg"<<endl;
		cout<<"Enter the weight in Kilogram: "<<endl;
		cin>>kg;
		float convertKg=kg*1000;
		cout<<"Weight converted from kg to grams is: "<<convertKg<<"gm"<<endl;
	}
};

class volume:public conversion
{
	public:
		void accept1()
		{
	cout<<"Enter the volume in mililiter: "<<endl;
	cin>>ml;
	float convertL=ml*0.001;
	cout<<"Weight converted from mililitre to liter "<<convertL<<" litre"<<endl;
	cout<<"Enter the volume in litre: "<<endl;
	cin>>l;
	float convertM=l*1000;
		cout<<"Weight converted from litre to mililiter "<<convertM<<"ML"<<endl;
	}
};

class currency:public conversion
{
	public:
	void accept2(){
	cout<<"Enter the currency in rupees: "<<endl;
	cin>>rs;
	float convertC=rs*100;
	cout<<"Rupees converted to paise: "<<convertC<<"paise"<<endl;
	cout<<"Enter the currency in paise: "<<endl;
	cin>>ps;
	float convertP=ps*0.01;
	cout<<"Paise converted to rupees: "<<convertP<<"rs"<<endl;
}
};

int main()
{
	conversion c;
	weight w;
	w.accept();
	volume v;
	v.accept1();
currency cn;
cn.accept2();
	return 0;
}
