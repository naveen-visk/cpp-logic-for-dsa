#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter Character : ";
    cin >> str;

    int i = 0;
    while(str[i] != '0') {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        i++;
    }
    cout << "LowerCase = " << str << endl;

    return 0;
}