
#include<conio.h>
#include<math.h>
using namespace std;
void main(){
	
	
	clrscr();
	float p,r,t,si,ci;
	cout<<"enter p.r.t(year)";
	cin>>p>>r>>t;
	
	
	
	si = (p*r*t)/100;
	ci = p*pow(1+r/100),t)-p;
	cout<<"simple intrest is"<<si;
	cout <<"compound intrest is"<<ci;
	getch();
}
