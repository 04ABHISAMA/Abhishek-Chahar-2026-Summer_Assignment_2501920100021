#include <iostream>

int main() {
    int n = 3;
    int matrix[3][3] = {{1, 2, 3}, 
                        {4, 5, 6}, 
                        {7, 8, 9}};
    
    int principal_sum = 0;
    int secondary_sum = 0;

    for (int i = 0; i < n; i++) {
        principal_sum += matrix[i][i];
        secondary_sum += matrix[i][n - i - 1];
    }

    std::cout << "Principal Diagonal Sum: " << principal_sum << std::endl;
    std::cout << "Secondary Diagonal Sum: " << secondary_sum << std::endl;

    return 0;
}