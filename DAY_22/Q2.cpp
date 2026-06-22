//
// Created by Abhishek Chahar  on 22/06/26.
//
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    int freq[256] = {0};

    for (int i = 0; i < str.length(); i++) {
        freq[(unsigned char)str[i]]++;
    }

    std::cout << "Character frequencies:" << std::endl;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            std::cout << (char)i << ": " << freq[i] << std::endl;
        }
    }

    return 0;
}