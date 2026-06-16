#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        return 0;
    }

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int uniqueSize = 0;

    for (int i = 0; i < n; ++i) {
        bool isDuplicate = false;

        for (int j = 0; j < uniqueSize; ++j) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            arr[uniqueSize] = arr[i];
            uniqueSize++;
        }
    }

    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < uniqueSize; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}