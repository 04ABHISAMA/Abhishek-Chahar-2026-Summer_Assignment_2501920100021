#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int low, high, num, originalNum, remainder, count, result;
    cin >> low >> high;
    
    for (num = low; num <= high; num++) {
        count = 0;
        result = 0;
        originalNum = num;
        
        while (originalNum != 0) {
            originalNum /= 10;
            ++count;
        }
        
        originalNum = num;
        
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, count);
            originalNum /= 10;
        }
        
        if (result == num) {
            cout << num << " ";
        }
    }
    return 0;
}