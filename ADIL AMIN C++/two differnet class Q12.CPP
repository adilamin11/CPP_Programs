#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

class A {
private:
    int num;

public:
    A(int n) : num(n) {}

    friend int subtract(A objA, B objB);
};

class B {
private:
    int num;

public:
    B(int n) : num(n) {}

    friend int subtract(A objA, B objB);
};

int subtract(A objA, B objB) {
    return objA.num - objB.num;
}

int main() {
    A objA(10);
    B objB(5);

    int result = subtract(objA, objB);

    cout << "Result of subtraction: " << result << endl;

    return 0;
}
