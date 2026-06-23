#include <iostream>
#include <string>
#include <vector>

char maxOccurringChar(std::string s) {
    std::vector<int> count(256, 0);
    int maxCount = 0;
    char result = '\0';
    
    for (char c : s) {
        count[c]++;
        if (count[c] > maxCount) {
            maxCount = count[c];
            result = c;
        }
    }
    return result;
}

int main() {
    std::string s = "microsoftpaytm";
    std::cout << maxOccurringChar(s) << std::endl;
    return 0;
}