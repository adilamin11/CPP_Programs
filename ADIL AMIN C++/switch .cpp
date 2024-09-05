#include <iostream>
using namespace std;
/*switch ( integer/character expression )
{  
case {value 1} :  
do this ;
 
case {value 2} :  
 do this ;  
 
default :  
do this ;
 }*/
 
int main()
{
    int i = 2;
    switch (i)
    {
    case 1:
        cout << "Statement 1" << endl;
        break;
 
    case 2:
        cout << "Statement 2" << endl;
        break;
 
    default:
        cout << "Default statement!" << endl;
    }
}