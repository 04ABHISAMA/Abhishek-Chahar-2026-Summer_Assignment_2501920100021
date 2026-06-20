#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int dec_value = 0;
    int base = 1;
    long long temp = n;
    
    while (temp) {
        long long last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    
    cout << dec_value;
    
    return 0;
}