#include <iostream>
using namespace std;
const float PI= 3.14;
inline float circlearea(float radius){


	
  return PI * radius * radius;
}
inline float squarearea(float side){

   
	return  side * side;
	
	
}
inline double rectanglearea(float length,float width){



	return length * width;
}
int main(){



   float radius=5.0,side=4.0,length=6.0,width=3.0;
   cout<<"area of circle:"<<circlearea(radius)<<endl;
   cout<<"area of square:"<<squarearea(side)<<endl;
   cout<<"area of rectangle:"<<rectanglearea(length,width)<<endl;
   return 0; 	
}
