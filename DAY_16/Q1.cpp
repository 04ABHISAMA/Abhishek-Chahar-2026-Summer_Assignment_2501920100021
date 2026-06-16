#include <iostream>

int main() {
    int n;
    std::cout << "Enter the total number of elements (including the missing one): ";
    std::cin >> n;

    int arr[n - 1];
    std::cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; ++i) {
        std::cin >> arr[i];
    }

    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; ++i) {
        actualSum += arr[i];
    }

    int missingNumber = expectedSum - actualSum;

    std::cout << "The missing number is: " << missingNumber << std::endl;

    return 0;
}