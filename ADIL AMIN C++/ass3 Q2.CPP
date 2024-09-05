#include <iostream>
using namespace std;

class Integer {
private:
    int value;

public:
    Integer(int val) : value(val) {}

    Integer& operator++() {
        ++value;
        return *this;
    }

    Integer& operator--() {
        --value;
        return *this;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Integer num(10);
// thiss iss logic
    ++num;
    num.display();

    --num;
    num.display();

    return 0;
}
