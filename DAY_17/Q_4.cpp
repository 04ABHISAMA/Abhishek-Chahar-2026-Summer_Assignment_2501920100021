#include <iostream>
#include <unordered_map>

int main() {
    int arr1[] = {1, 2, 4, 4, 5};
    int arr2[] = {2, 4, 4, 6};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    std::unordered_map<int, int> counts;

    for (int i = 0; i < n1; i++) {
        counts[arr1[i]]++;
    }

    for (int i = 0; i < n2; i++) {
        if (counts[arr2[i]] > 0) {
            std::cout << arr2[i] << " ";
            counts[arr2[i]]--;
        }
    }
    
    return 0;
}