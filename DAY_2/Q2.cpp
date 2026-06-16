#include <iostream>

int main() {
    int number, reversedNumber = 0, remainder;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    std::cout << "Reversed Number = " << reversedNumber << std::endl;

    return 0;
}