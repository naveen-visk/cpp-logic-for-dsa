#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter Character :  ";
    cin >> str;

    int vowel = 0;
    int constant = 0;
    int i = 0;

    while(str[i] != '\0') {
        char ch = str[i];

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { 
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel++;
           }
        else {
            constant++;
        }
        }
        i++;
    }
    cout << "Total Vowels = " << vowel << endl;
    cout << "Total Constant = " << constant << endl;

    return 0;
}