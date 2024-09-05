#include <iostream>

// Inline function to calculate the perimeter of a rectangle
inline double calculatePerimeter(double length, double width) {
    return 2 * (length + width);
}

// Inline function to calculate the area of a rectangle
inline double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    double length, width;

    // Input for length and width of the rectangle
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Calculate and display the perimeter and area using inline functions
    std::cout << "Perimeter of the rectangle: " << calculatePerimeter(length, width) << std::endl;
    std::cout << "Area of the rectangle: " << calculateArea(length, width) << std::endl;

    return 0;
}
