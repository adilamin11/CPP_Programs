#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    string studentName;
    double percentage;

public:
    void acceptInfo() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Student Name: ";
        cin.ignore();
     //  cin>>name
       getline(cin, studentName);
        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void displayInfo() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        
        if (percentage >= 75) {
            cout << "Class Obtained: Distinction" << endl;
        } else if (percentage >= 60) {
            cout << "Class Obtained: First Class" << endl;
        } else if (percentage >= 40) {
            cout << "Class Obtained: Pass Class" << endl;
        } else {
            cout << "Class Obtained: Fail" << endl;
        }
    }
};

const int MAX_STUDENTS = 2;

int main() {
    Student students[MAX_STUDENTS];

    // Accept information of students
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "Enter details for Student " << i + 1 << endl;
        students[i].acceptInfo();
        cout << endl;
    }

    // Display details of students with their class
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "Details for Student " << i + 1 << endl;
        students[i].displayInfo();
        cout << endl;
    }

    return 0;
}
