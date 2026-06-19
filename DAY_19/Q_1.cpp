#include <iostream>

int main() {
    int r = 2, c = 3;
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][3] = {{7, 8, 9}, {1, 2, 3}};
    int sum[2][3];

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << sum[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}