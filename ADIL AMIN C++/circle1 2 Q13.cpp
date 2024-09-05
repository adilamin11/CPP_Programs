#include <iostream>
#include <cmath>
using namespace std;

class Circle2;

class Circle1 {
private:
    double radius;

public:
    Circle1(double r) : radius(r) {}

    double getArea() {
        return M_PI * radius * radius;
    }

    friend void compareAreas(Circle1 c1, Circle2 c2);
};

class Circle2 {
private:
    double radius;

public:
    Circle2(double r) : radius(r) {}

    double getArea() {
        return M_PI * radius * radius;
    }

    friend void compareAreas(Circle1 c1, Circle2 c2);
};

void compareAreas(Circle1 c1, Circle2 c2) {
    double area1 = c1.getArea();
    double area2 = c2.getArea();

    if (area1 > area2) {
        cout << "Circle1 has a larger area than Circle2." << endl;
    } else if (area1 < area2) {
        cout << "Circle2 has a larger area than Circle1." << endl;
    } else {
        cout << "Both circles have the same area." << endl;
    }
}

int main() {
    Circle1 c1(5);
    Circle2 c2(7);

    compareAreas(c1, c2);

    return 0;
}
