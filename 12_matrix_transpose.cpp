#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Size Of Square Matrix Order : ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter Matrix Elements of " << n << " x " << n << " Order \n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    cout << "\n--- Original Matrix ---\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n--- Transpose Matrix ---\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}