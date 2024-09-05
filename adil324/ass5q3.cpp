#include <iostream>
using namespace std;

class LIST {
public:
    virtual void store() = 0;//only we have to decleare it
    virtual void retrieve() = 0;
};

class Stack : public LIST {
public:
    void store() override {
        cout << "Storing in Stack" << endl;
        cout<<"sotre th value in stack"<<endl;
        // Implement the storing logic for a stack
    }

    void retrieve() override {
        cout << "Retrieving from Stack" << endl;
        cout<<" 12:override MEANS function of the same name and same function and their data types"<<endl;
        // Implement the retrieving logic for a stack
    }
};

class Queue : public LIST {
public:
    void store() override {
        cout << "Enqueuing into Queue" << endl;
        // Implement the storing logic for a queue
    }

    void retrieve() override {
        cout << "Dequeuing from Queue" << endl;
        // Implement the retrieving logic for a queue
    }
};

int main() {
    Stack stackObj;
    Queue queueObj;

    stackObj.store();
    stackObj.retrieve();

    queueObj.store();
    queueObj.retrieve();

    return 0;
}