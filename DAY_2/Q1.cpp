#include <iostream>

int main() {
    int number, sum = 0, remainder;

    std::cin >> number;

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }

    std::cout << sum << std::endl;

    return 0;
}