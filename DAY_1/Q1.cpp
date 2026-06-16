#include <iostream>

int main() {
    long long N;
    std::cin >> N;
    
    long long sum = (N * (N + 1)) / 2;
    
    std::cout << sum << std::endl;
    return 0;
}