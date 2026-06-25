#include <iostream>

int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 45;
    int num2 = 82;

    std::cout << findMaximum(num1, num2) << std::endl;

    return 0;
}
