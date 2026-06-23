#include <iostream>
#include <string>
#include <vector>

bool isAnagram(std::string s1, std::string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    std::vector<int> count(256, 0);
    for (int i = 0; i < s1.length(); i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string s1 = "listen";
    std::string s2 = "silent";
    if (isAnagram(s1, s2)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}