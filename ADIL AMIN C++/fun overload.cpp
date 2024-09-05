#include<iostream>
using namespace std;
int sum(int a,int b){
	cout<<"using function with 2 argumrnts"<<endl;
	return a+b;
}
int sum(int a,int b,int c){
	cout<<"using function with 3 arguments"<<endl;
	return a+b+c;
}
//calculate the volume of cylinder
int volume(double r,int h){
	return (3.14 *r *r *h);
}
//calculte the volume of a cube
int volume(int a){
	return a * a* a;
}
//rectangle box
int volume(int l,int b,int h){
	return (l*b*h);
}
int main(){
	cout<<"the sum of 3 and 6 is:  "<<sum(3,6)<<endl;
	cout<<"the suk of 3,7 and 6 is: "<<sum(3,7,6);
	cout<<"the volume of cuboid is: "<<volume(3,7,6)<<endl;
	cout<<"the volume of cylinder of radius 3 and height 6 is: "<<volume(3,6)<<endl;
	cout<<"the volume of cube of side3   "<<volume(3)<<endl;
	return 0;
}