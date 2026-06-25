#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 29;

    if (isPrime(num)) {
        std::cout << "Prime" << std::endl;
    } else {
        std::cout << "Not Prime" << std::endl;
    }

    return 0;
}