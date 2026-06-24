#include <iostream>
#include <string>

bool isRotation(std::string s1, std::string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    std::string temp = s1 + s1;
    return temp.find(s2) != std::string::npos;
}

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    if (isRotation(s1, s2)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}