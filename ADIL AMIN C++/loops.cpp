#include <iostream>
using namespace std;
 //for loop
int main()
{
    int num = 10;
    int i;
    for (i = 0; i < num; i++)
    {
        cout << i << " ";
    }
    return 0;
}


 //while loop
int main()
{
    int i = 5;
    while (i < 10)
    {
        cout << i << " ";
        i++;
    }
    
 
    return 0;
}
//do while loop
int main()
{
    int i = 5;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 5);
 
    return 0;
}