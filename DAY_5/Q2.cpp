#include <iostream>
using namespace std;

int main() {
    int n, temp, sum = 0, rem;
    cin >> n;
    temp = n;
    
    while (temp > 0) {
        rem = temp % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    
    if (sum == n && n > 0)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";
        
    return 0;
}