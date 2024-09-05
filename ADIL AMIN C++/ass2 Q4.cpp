#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bName;
    string author;
    double price;

public:
    void acceptInfo() {
        cout << "Enter Book Name: ";
        cin.ignore();
        getline(cin, bName);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayInfo() {
        cout << "Book Name: " << bName << endl;
        cout << "Author Name: " << author << endl;
        cout << "Price: " << price << endl;
    }

    string getAuthor() {
        return author;
    }

    double getPrice() {
        return price;
    }
};

const int MAX_BOOKS = 5;

int main() {
    Book books[MAX_BOOKS];

    // Accept information of books
    for (int i = 0; i < MAX_BOOKS; ++i) {
        cout << "Enter details for Book " << i + 1 << endl;
        books[i].acceptInfo();
        cout << endl;
    }

    // Search book name of a given author
    string searchAuthor;
    cout << "Enter the author name to search for their books: ";
    cin.ignore();
    getline(cin, searchAuthor);

    bool foundAuthor = false;
    for (int i = 0; i < MAX_BOOKS; ++i) {
        if (books[i].getAuthor() == searchAuthor) {
            books[i].displayInfo();
            foundAuthor = true;
            break;
        }
    }

    if (!foundAuthor) {
        cout << "No books found for the given author." << endl;
    }

    // Search price of a given book
    string searchBook;
    cout << "Enter the book name to search for its price: ";
    getline(cin, searchBook);

    bool foundBook = false;
    for (int i = 0; i < MAX_BOOKS; ++i) {
        if (books[i].getAuthor() == searchBook) {
            cout << "Price of book " << searchBook << " is: " << books[i].getPrice() << endl;
            foundBook = true;
            break;
        }
    }

    if (!foundBook) {
        cout << "Book not found." << endl;
    }

    return 0;
}
