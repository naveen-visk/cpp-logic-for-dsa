#include <iostream>

int comparison(char str1[], char str2[]) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }
        if(str1[i] == '\0' && str2[i] == '\0') {
            return true;
        }
        else {
            return false;
        }
    
}

int main() {
    char str1[100];
    std::cout << "Enter First Character : ";
    std::cin >> str1;

    char str2[100];
    std::cout << "Enter second Character : ";
    std::cin >> str2;

    if (comparison(str1, str2)) {
        std::cout << "Comparison Result: Both strings are EQUAL!" << std::endl;
    } else {
        std::cout << "Comparison Result: Strings are NOT equal." << std::endl;
    }

    return 0;
}