#include <iostream>

bool isPalindrome(int n) {
    if (n < 0) return false;

    int original = n;
    long long reversed = 0;

    while (n > 0) {
        reversed = (reversed * 10) + (n % 10);
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int num = 121;

    if (isPalindrome(num)) {
        std::cout << "Palindrome" << std::endl;
    } else {
        std::cout << "Not Palindrome" << std::endl;
    }

    return 0;
}