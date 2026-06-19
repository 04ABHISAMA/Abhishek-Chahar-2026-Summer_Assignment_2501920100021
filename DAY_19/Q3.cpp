#include <iostream>

int main() {
    int r = 2, c = 3;
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2];

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
            std::cout << transpose[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}