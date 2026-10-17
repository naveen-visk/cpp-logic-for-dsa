/*
Problem Name: Check Palindrome Number
Topic: Logic Building (Digit Manipulation)

Description:
Take an integer N as input and check if it is a Palindrome or not.
Example: 121 -> Palindrome, 123 -> Not Palindrome
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number : ";
    cin >> n;

    int reverse = 0, digit;
    int original = n;

    while(n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    cout << "Reverse = " << reverse << endl;

    if(original == reverse) {
        cout << "Palindrome" << endl;
    }
    else  cout << "Not Palindrome" << endl;
    
    return 0;
}