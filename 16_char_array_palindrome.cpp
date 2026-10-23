#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter Character : ";
    cin >> str;

    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    
    int start = 0;
    int end = length - 1;
    bool isPalindrome = true;

    while(start < end) {
        if(str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome) {
        cout << str << " is Palindrome" << endl;
    }
    else {cout << str << " Not palinrome" << endl;
    }

    return 0;
}