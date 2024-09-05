#include <iostream>
using namespace std;

class Worker {
private:
    string workerName;
    double hoursWorked;
    double payRate;

public:
    Worker(string name, double hours, double rate) : workerName(name), hoursWorked(hours), payRate(rate) {}

    double calculateSalary() {
        return hoursWorked * payRate;
    }

    void displaySalary() {
        cout << "Salary of " << workerName << " is: " << calculateSalary() << endl;
    }
};

int main() {
    string name;
    double hours, rate;

    cout << "Enter worker name: ";
    cin >> name;
    cout << "Enter number of hours worked: ";
    cin >> hours;
    cout << "Enter pay rate: ";
    cin >> rate;

    Worker worker(name, hours, rate);
    worker.displaySalary();

    return 0;
}
