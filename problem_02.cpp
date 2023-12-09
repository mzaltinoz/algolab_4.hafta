#include <iostream>

int main() {
    int N;
    std::cout << "Enter the upper limit (N): ";
    std::cin >> N;
    std::cout << "Odd numbers between 1 and " << N << ": ";

    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}