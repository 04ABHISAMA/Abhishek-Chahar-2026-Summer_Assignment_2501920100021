#include <iostream>

int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int sign = (n < 0) ? -1 : 1;
    int temp = n < 0 ? -n : n;

    int reversed = reverseNumber(temp, 0) * sign;

    std::cout << "Reversed number: " << reversed << std::endl;
    return 0;
}