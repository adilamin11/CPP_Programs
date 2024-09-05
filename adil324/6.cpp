#include <iostream>
using namespace std;

float tringle(int a,int b) // right angled
{
	return (a * b / 2);
}

float tringle(int a) // isosceles tringled
{
	return (0.433 * a * a );
}

float tringle(float a , int b)  // equilateral tringled
{
	return (1 / 2 * a * b);
}

int main()
{
  int x,y;
  
  cout<<"Enter X value : ";
  cin>>x;
  cout<<"Enter Y Value : ";
  cin>>y;
   
  cout<<"\n\nRight Angled Tringled is : "<<tringle(x,y);
  cout<<"\nIsosceles Tringled is : "<<tringle(x);
  cout<<"\nEquilateral Tringld is : "<<tringle(x,y);
  

