#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array Size : ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " Elements = ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int largest = -1;
    int second_largest = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }
    cout << "Largest Number = " << largest << endl;
    cout << "Second Largest = " << second_largest << endl;

    return 0;
}