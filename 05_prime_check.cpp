#include <iostream>
using namespace std;

int main() {
    int c = 0;
    int n;
    cout << "Enter Number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            c++;
        }
    }
    if(c == 2) {
        cout << "Prime Number" << endl;
    }
    else {
        cout << "Not prime" << endl;
    }

    return 0;
}