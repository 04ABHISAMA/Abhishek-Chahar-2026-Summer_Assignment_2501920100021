#include <iostream>

int main() {
    long long num;
    std::cin >> num;

    int count = 0;

    if (num == 0) {
        count = 1;
    } else {
        if (num < 0) {
            num = -num;
        }
        while (num > 0) {
            num /= 10;
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}