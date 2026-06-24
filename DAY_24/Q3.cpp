#include <iostream>
#include <string>
#include <sstream>

std::string findLongestWord(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word, longest = "";
    while (ss >> word) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }
    return longest;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << findLongestWord(sentence) << std::endl;
    return 0;
}