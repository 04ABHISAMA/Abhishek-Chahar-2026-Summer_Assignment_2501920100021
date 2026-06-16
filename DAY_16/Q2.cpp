#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int maxElement = arr[0];
    int maxCount = 0;

    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    std::cout << "Element with maximum frequency: " << maxElement << " (Appears " << maxCount << " times)" << std::endl;

    return 0;
}