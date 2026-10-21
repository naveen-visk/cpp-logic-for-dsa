#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter Row and Column : ";
    cin >> row >> col;

    int matrix[row][col];

    cout << "Enter " << row << " x " << col << " Elements : ";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\n--- Row Sum ---\n"; 
    for(int i = 0; i < row; i++) {
        int rowsum = 0;
        for(int j = 0; j < col; j++) {
            rowsum = rowsum + matrix[i][j];
        }
        cout << "Row " << i + 1 << " Sum = " << rowsum << endl;
    }
    
    cout << "\n--- Column Sum ---\n";
    for(int j = 0; j < col; j++) {
        int colsum = 0;
        for(int i = 0; i < row; i++) {
            colsum = colsum + matrix[i][j];
        }
        cout << "Column " << j + 1 << " Sum = " << colsum << endl;
    }

    return 0;
}