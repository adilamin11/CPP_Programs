#include <iostream>
#include <cmath>
using namespace std;

// Inline function to calculate simple interest
inline double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}

// Inline function to calculate compound interest
inline double calculateCompoundInterest(double principal, double rate, double time) {
    return principal * (pow((1 + rate / 100), time) - 1);
}

int main() {
    double principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;

    double simpleInterest = calculateSimpleInterest(principal, rate, time);
    double compoundInterest = calculateCompoundInterest(principal, rate, time);

    cout << "Simple Interest: " << simpleInterest << endl;
    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}
