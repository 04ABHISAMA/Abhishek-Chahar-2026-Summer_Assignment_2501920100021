#include <iostream>
#include <set>

int main() {
    int arr1[] = {1, 2, 3, 4, 4};
    int arr2[] = {3, 4, 4, 5, 6};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    std::set<int> s1;
    std::set<int> intersectionSet;

    for (int i = 0; i < n1; i++) {
        s1.insert(arr1[i]);
    }

    for (int i = 0; i < n2; i++) {
        if (s1.find(arr2[i]) != s1.end()) {
            intersectionSet.insert(arr2[i]);
        }
    }

    for (int val : intersectionSet) {
        std::cout << val << " ";
    }
    
    return 0;
}