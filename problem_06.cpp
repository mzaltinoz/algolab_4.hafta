#include <iostream>

int main() {
    int sum = 0;

    std::cout << "Enter interior angle values of a triangle (non-zero values): " << std::endl;

    for (int i = 0; i < 3; ++i) {
        int angle;
        do {
            std::cout << "Angle " << i + 1 << ": ";
            std::cin >> angle;

            if (angle == 0) {
                std::cout << "Error: Angle cannot be zero. Please try again." << std::endl;
            }
        } while (angle == 0);

        sum += angle;
    }

    if (sum == 180) {
        std::cout << "Valid." << std::endl;
    } else {
        std::cout << "Not valid." << std::endl;
    }

    return 0;
}