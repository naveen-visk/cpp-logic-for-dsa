#include <iostream>
using namespace std;

int main () {
    char str1[100];
    char str2[100];

    cout << "Enter Word : ";
    cin >> str1;

    int i = 0;
    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    cout << "Copied String (Str2) : " << str2 << endl;

    return 0;
}