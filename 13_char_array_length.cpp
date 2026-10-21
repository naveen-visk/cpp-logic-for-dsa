#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter word : ";
    cin >> str;

    cout << "str = " << str << endl;
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    cout << "Length = " << length << endl;
    
    return 0;
}