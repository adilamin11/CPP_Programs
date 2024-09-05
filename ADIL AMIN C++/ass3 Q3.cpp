#include <iostream>
#include <vector>
using namespace std;

class SquareMatrix {
private:
    int size;
    vector<vector<int>> matrix;

public:
    SquareMatrix(int n) : size(n), matrix(n, vector<int>(n, 0)) {}

    void fillMatrix() {
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                cin >> matrix[i][j];
            }
        }
    }

    void interchangeColumns(int m, int n);

    void displayMatrix() {
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

void SquareMatrix::interchangeColumns(int m, int n) {
    for (int i = 0; i < size; ++i) {
        swap(matrix[i][m - 1], matrix[i][n - 1]);
    }
}

int main() {
    int size, m, n;
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    SquareMatrix matrix(size);

    cout << "Enter the matrix elements:" << endl;
    matrix.fillMatrix();

    cout << "Enter the columns to interchange (m and n): ";
    cin >> m >> n;

    matrix.interchangeColumns(m, n);

    cout << "Matrix after interchanging columns " << m << " and " << n << ":" << endl;
    matrix.displayMatrix();

    return 0;
}
