#include <iostream>
#include <string>
#include <vector>

char firstNonRepeating(std::string s) {
    std::vector<int> count(256, 0);
    for (char c : s) {
        count[c]++;
    }
    for (char c : s) {
        if (count[c] == 1) {
            return c;
        }
    }
    return '\0';
}

int main() {
    std::string s = "algorithmicmagic";
    char result = firstNonRepeating(s);
    if (result != '\0') {
        std::cout << result << std::endl;
    } else {
        std::cout << "-1" << std::endl;
    }
    return 0;
}