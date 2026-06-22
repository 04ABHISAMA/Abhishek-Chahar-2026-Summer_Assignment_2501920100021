//
// Created by Abhishek Chahar  on 22/06/26.
//
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, str);

    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    std::cout << "Total number of words: " << wordCount << std::endl;
    return 0;
}