#include <iostream>
#include <string>

std::string compressString(std::string s) {
    std::string compressed = "";
    int n = s.length();
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        compressed += s[i] + std::to_string(count);
    }
    return compressed.length() < s.length() ? compressed : s;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << compressString(s) << std::endl;
    return 0;
}