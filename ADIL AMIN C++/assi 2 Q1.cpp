#include <iostream>
#include <string>
using namespace std;

const int MAX_PERSONS = 10;

class Person {
private:
    string personName;
    string city;
    string mobNo;

public:
    void acceptInfo() {
        cout << "Enter person name: ";
        cin.ignore();
        getline(cin, personName);
        cout << "Enter city: ";
        getline(cin, city);
        cout << "Enter mobile number: ";
        getline(cin, mobNo);
    }

    void displayInfo() {
        cout << "Person Name: " << personName << endl;
        cout << "City: " << city << endl;
        cout << "Mobile Number: " << mobNo << endl;
    }

    string getMobNo() {
        return mobNo;
    }
};

int main() {
    Person persons[MAX_PERSONS];

    // Accept information of 10 persons
    for (int i = 0; i < MAX_PERSONS; ++i) {
        cout << "Enter details for Person " << i + 1 << endl;
        persons[i].acceptInfo();
        cout << endl;
    }

    // Search mobile number of a given person
    string searchName;
    cout << "Enter the person name to search for their mobile number: ";
    cin.ignore();
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < MAX_PERSONS; ++i) {
        if (persons[i].getMobNo() == searchName) {
            persons[i].displayInfo();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Person not found." << endl;
    }

    // Search person details of a given mobile number
    string searchMobNo;
    cout << "Enter the mobile number to search for their details: ";
    cin.ignore();
    getline(cin, searchMobNo);

    found = false;
    for (int i = 0; i < MAX_PERSONS; ++i) {
        if (persons[i].getMobNo() == searchMobNo) {
            persons[i].displayInfo();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Mobile number not found." << endl;
    }

    return 0;
}
