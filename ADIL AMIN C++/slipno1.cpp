#include <iostream>
#include <cmath>
using namespace std;

// Function to compute power with double and int arguments
double power(double m, int n) {
    return pow(m, n);
}

// Function to compute power with int arguments
int power(int m, int n) {
    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= m;
    }
    return result;
}

int main() {
    double m_double;
    int m_int, n_int;

    // Input for double and int power
    cout << "Enter the value for m (double): ";
    cin >> m_double;
    cout << "Enter the value for n (int): ";
    cin >> n_int;
    cout << "Power (double, int): " << power(m_double, n_int) << std::endl;

    // Input for int power
    cout << "Enter the value for m (int): ";
    cin >> m_int;
    cout << "Enter the value for n (int): ";
    cin >> n_int;
    cout << "Power (int, int): " << power(m_int, n_int) << std::endl;

    return 0;
}
