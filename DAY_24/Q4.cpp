#include <iostream>
#include <string>
#include <unordered_set>

std::string removeDuplicates(std::string s) {
    std::unordered_set<char> seen;
    std::string result = "";
    for (char c : s) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
            result += c;
        }
    }
    return result;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << removeDuplicates(s) << std::endl;
    return 0;
}