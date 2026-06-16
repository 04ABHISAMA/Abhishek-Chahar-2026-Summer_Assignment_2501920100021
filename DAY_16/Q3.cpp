#include <iostream>

int main() {
    int n, targetSum;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the target sum: ";
    std::cin >> targetSum;

    bool found = false;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == targetSum) {
                std::cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << std::endl;
                found = true;
            }
        }
    }

    if (!found) {
        std::cout << "No pair found with the given sum." << std::endl;
    }

    return 0;
}