#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    double pi;

public:
    Circle(double r, double p = 3.14159) : radius(r), pi(p) {}

    double calculateArea() {
        return pi * radius * radius;
    }
};

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle(radius);

    double area = circle.calculateArea();
    cout << "Area of the circle: " << area << endl;

    return 0;
}
