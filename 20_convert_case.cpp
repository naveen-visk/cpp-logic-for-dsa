#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a Character ";
    cin >> str;

    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        i++;
    }

    cout << "Uppercase Charater = " << str << endl;

    return 0;
}