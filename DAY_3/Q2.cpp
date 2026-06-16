#include <iostream>

int main() {
    int lowerBound, upperBound;

    std::cout << "Enter lower bound: ";
    std::cin >> lowerBound;
    std::cout << "Enter upper bound: ";
    std::cin >> upperBound;

    std::cout << "Prime numbers between " << lowerBound << " and " << upperBound << " are: " << std::endl;

    if (lowerBound < 2) {
        lowerBound = 2;
    }

    for (int i = lowerBound; i <= upperBound; ++i) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}