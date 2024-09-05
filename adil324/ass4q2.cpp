

#include <iostream>
using namespace std;
class car
{
public:
    void display()
    {
        cout << "This is class car";
    }
};

class maruti : public car
{
public:
    void display2()
    {
        cout << "This is class maruti which extends class car";
    }
};

class maruti800 : public maruti
{
public:
    void display3()
    {
        cout << "This is class maruti 800 extends maruti";
    }
};

int main()
{
    maruti800 m;
    m.display();
    cout << endl;
    m.display2();
    cout << endl;
    m.display3();

    return 0;
}
