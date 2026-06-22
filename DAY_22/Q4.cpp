//
// Created by Abhishek Chahar  on 22/06/26.
//
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::string result = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result += str[i];
        }
    }

    std::cout << "String without spaces: " << result << std::endl;
    return 0;
}