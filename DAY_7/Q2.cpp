#include <iostream>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    std::cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}