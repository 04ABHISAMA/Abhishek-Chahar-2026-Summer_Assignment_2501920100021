#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    int vowels = 0, consonants = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = std::tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    std::cout << "Vowels: " << vowels << std::endl;
    std::cout << "Consonants: " << consonants << std::endl;
    return 0;
}