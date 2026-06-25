#include <iostream>

void printFibonacci(int terms) {
    if (terms <= 0) return;

    long long t1 = 0, t2 = 1;

    for (int i = 1; i <= terms; ++i) {
        if (i == 1) {
            std::cout << t1 << " ";
            continue;
        }
        if (i == 2) {
            std::cout << t2 << " ";
            continue;
        }
        long long nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        std::cout << nextTerm << " ";
    }
    std::cout << std::endl;
}

int main() {
    int terms = 10;

    printFibonacci(terms);

    return 0;
}