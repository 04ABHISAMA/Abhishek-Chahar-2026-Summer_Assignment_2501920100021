#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    std::cout << "Length of the string: " << length << std::endl;
    return 0;
}