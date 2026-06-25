#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<char> findCommonCharacters(const std::vector<std::string>& strings) {
    std::vector<char> result;
    if (strings.empty()) return result;

    std::vector<int> minFreq(26, 100) ;

    for (const auto& str : strings) {
        std::vector<int> freq(26, 0);
        for (char ch : str) {
            if (ch >= 'a' && ch <= 'z') {
                freq[ch - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            minFreq[i] = std::min(minFreq[i], freq[i]);
        }
    }

    for (int i = 0; i < 26; i++) {
        while (minFreq[i] > 0 && minFreq[i] < 100) {
            result.push_back(i + 'a');
            minFreq[i]--;
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"bella", "label", "roller"};
    std::vector<char> common = findCommonCharacters(strings);

    for (char ch : common) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    return 0;
}