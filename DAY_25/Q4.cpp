#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool compareLength(const std::string& a, const std::string& b) {
    return a.length() < b.length();
}

int main() {
    std::vector<std::string> words = {"apple", "banana", "kiwi", "date", "cherry"};

    std::sort(words.begin(), words.end(), compareLength);

    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}