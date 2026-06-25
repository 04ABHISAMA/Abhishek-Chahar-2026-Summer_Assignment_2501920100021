#include <iostream>

long long findFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num = 5;

    std::cout << findFactorial(num) << std::endl;

    return 0;
}