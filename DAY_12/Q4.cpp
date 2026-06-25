#include <iostream>

bool isPerfect(int n) {
    if (n <= 1) return false;

    int sum = 1;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i != n) {
                sum += i + (n / i);
            } else {
                sum += i;
            }
        }
    }

    return sum == n;
}

int main() {
    int num = 28;

    if (isPerfect(num)) {
        std::cout << "Perfect number" << std::endl;
    } else {
        std::cout << "Not a perfect number" << std::endl;
    }

    return 0;
}