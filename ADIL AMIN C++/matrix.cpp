#include<iostream>
using namespace std;
class array{
	int a[2][3];
	public:
		void accept(int i,int j)
		{
			cin>>a[i][j];
			
				array obj;
				int i,j;
				cout<<"enter elements of matrix";
				for(i=0;i<3;i++)
				{
				
					for(j=0;j<3;j++)
					
			
				obj.accept[i,j]
			}
		}

void display(int i,j)
{
	cout<<a[i][j]
}
main(){
	array obj;
	int i,j;
	cout<<"enter matrix";
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		obj.display[i,j]
		cout<<"\n";
	}
}
friend void interchange(array obj);
int m,n,temp;
cout<<"enter coloums to interchange";
cin>>m>>n;
for(int i=0;i<3;i++)
temp=obj.a[i][n];
obj.a[i][n]=obj.a[i][j];
obj.a[i][n] = temp;

};
int main()
{
	matrix m1;
	m1.accept();
	m1.display();
	return 0;
}
