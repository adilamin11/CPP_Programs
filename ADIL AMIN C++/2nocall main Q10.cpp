#include <iostream>
using namespace std;

// Function to display all odd numbers between num1 and num2 (inclusive)
void displayOddNumbers(int num1, int num2) {
    if (num1 % 2 == 0) {
        num1++; // Make sure num1 is odd
    }
    for (int i = num1; i <= num2; i += 2) {
        cout << i << " ";
    }
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Odd numbers between " << num1 << " and " << num2 << ": ";
    displayOddNumbers(num1, num2);
    cout << endl;

    return 0;
}
