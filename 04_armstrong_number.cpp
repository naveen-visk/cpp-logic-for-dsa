#include <iostream>
#include <cmath> 

int main() {
    int n;
    std::cout << "Enter any Number : ";
    std::cin >> n;

    int x, k, v;
    x = v = n;
    int count = 0, s = 0;
    
    while(n > 0) {
        count++;
        n = n / 10;
        std::cout << "Counting Number : " << count << std::endl;
    }

    while(v > 0) { 
        k = v % 10;
        s = s + pow(k, count);
        v = v / 10;
    }
    
    if(s == x) {
        std::cout << "Armstrong" << std::endl;
    }
    else {
        std::cout << "Not Armstrong" << std::endl;
    }

    return 0;
}