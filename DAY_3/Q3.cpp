#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    int a = num1;
    int b = num2;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    std::cout << "GCD of " << num1 << " and " << num2 << " is " << a << std::endl;

    return 0;
}