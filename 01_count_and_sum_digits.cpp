/*
Problem Name: Count Digits and Sum of Digits
Topic: Logic Building (Digit Manipulation)
Time Complexity: O(log10(N))
Space Complexity: O(1)

Description:
Take an integer N as input from the user. Calculate and print:
1. Total number of digits in N.
2. Sum of all digits in N.
*/
#include <iostream>
using namespace std;

int main() { 
    int n, digit, sum = 0, count = 0;
    cout << "Enter a number : ";
    cin >> n;

    if(n == 0) {
        cout << "Total digit is : 1" << endl;
        cout << "Sum of digit : 0" << endl;
    }

    while(n > 0) {
        digit = n % 10;
        sum = sum + digit;
        count++;
        n = n/10;
    }
    cout << "Total Digit is : " << count << endl;
    cout << "Sum of digit is : " << sum << endl;

    return 0;
}