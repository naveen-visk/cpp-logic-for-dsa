#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum = sum + i;
            cout << sum << " ";
        }
    }
    cout << endl;

    if(sum == n) {
        cout << n << " is a Perfect Number" << endl;
    } else {
        cout << n << " is NOT a Perfect Number" << endl;
    }

    return 0;
}