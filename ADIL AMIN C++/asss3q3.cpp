#include <iostream>
using namespace std;

class Integer {
private:
    int value;

public:
    Integer(int val) : value(val) {}

    Integer operator++() {
        // Overload the prefix increment operator
        value++;
        return *this;
    }

    Integer operator--() {
        // Overload the prefix decrement operator
        value--;
        return *this;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Integer num(5);

    ++num; // Increment num
    num.display();

    --num; // Decrement num
    num.display();

    return 0;
}
