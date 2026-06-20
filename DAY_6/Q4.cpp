#include <iostream>
using namespace std;

int main() {
    double x, result = 1.0;
    int n;
    cin >> x >> n;
    
    long long nn = n;
    if (nn < 0) nn = -1 * nn;
    
    while (nn > 0) {
        if (nn % 2 == 1) {
            result = result * x;
            nn = nn - 1;
        } else {
            x = x * x;
            nn = nn / 2;
        }
    }
    
    if (n < 0) result = (double)(1.0) / (double)(result);
    
    cout << result;
    
    return 0;
}