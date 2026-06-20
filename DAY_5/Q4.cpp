#include <iostream>
using namespace std;

int main() {
    long long n, maxPrime = -1;
    cin >> n;
    
    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1;
    }
    
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
    }
    
    if (n > 2)
        maxPrime = n;
        
    cout << maxPrime;
    
    return 0;
}