#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of ARRAY : ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " Elements : ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
        max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout<< "Max is : " <<max<<endl;
    cout<< "Min is : " <<min<<endl;
    
    return 0;
}