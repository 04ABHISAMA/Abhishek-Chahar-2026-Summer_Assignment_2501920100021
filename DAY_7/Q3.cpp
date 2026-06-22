#include <iostream>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int temp = n < 0 ? -n : n;

    std::cout << "Sum of digits of " << n << " is " << sumOfDigits(temp) << std::endl;
    return 0;
}