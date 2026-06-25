#include <iostream>
#include <cmath>

bool isArmstrong(int n) {
    if (n < 0) return false;

    int original = n;
    int temp = n;
    int digits = 0;
    long long sum = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += std::pow(remainder, digits);
        temp /= 10;
    }

    return original == sum;
}

int main() {
    int num = 153;

    if (isArmstrong(num)) {
        std::cout << "Armstrong number" << std::endl;
    } else {
        std::cout << "Not an Armstrong number" << std::endl;
    }

    return 0;
}