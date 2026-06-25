#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> names = {"Rahul", "Aman", "Vijay", "Ankit", "Deepak"};

    std::sort(names.begin(), names.end());

    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}

