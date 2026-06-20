#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0, result = 0;
    cin >> num;
    originalNum = num;
    
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }
    
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }
    
    if (result == num)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
        
    return 0;
}