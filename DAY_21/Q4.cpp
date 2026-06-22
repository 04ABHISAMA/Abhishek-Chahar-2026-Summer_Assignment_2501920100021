#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string in lowercase: ";
    std::getline(std::cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    std::cout << "Uppercase string: " << str << std::endl;
    return 0;
}