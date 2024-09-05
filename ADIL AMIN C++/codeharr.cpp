#include<iostream>
using namespace std;
int main(){
	/*arrays
//	int arr[34]={1,3,6};
	//cout<<arr[2];
	int marks[6];
	int i;
	for(int i =0;i<6;i++)
	{
		cout<<"enter the marks of "<<i<<"the student"<<endl;
		cin>>marks[i];
	}
	{
		cout<<"the marks of "<<i<<"the student is ="<<endl;
		cin>>marks[i];
	}*/
	int arr2d[2][3]={
	{1,2,3},{4,5,6}};
	for (int i =0;i<2;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<"the value at  "<<i<<","<<"is    	"<<arr2d[i][j]<<endl;
			}	
	}
	
	
	
	
	return 0;

	
}