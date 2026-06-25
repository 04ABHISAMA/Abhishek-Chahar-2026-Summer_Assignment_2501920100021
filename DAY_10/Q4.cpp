#include <iostream>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }
        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            std::cout << ch;
            ch++;
        }
        ch -= 2;
        for (int l = i - 1; l >= 1; l--) {
            std::cout << ch;
            ch--;
        }
        std::cout << std::endl;
    }

    return 0;
}