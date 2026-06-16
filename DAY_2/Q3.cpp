#include <iostream>

int main() {
    int number, product = 1, remainder;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number == 0) {
        product = 0;
    }

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        remainder = number % 10;
        product *= remainder;
        number /= 10;
    }

    std::cout << "Product of digits = " << product << std::endl;

    return 0;
}