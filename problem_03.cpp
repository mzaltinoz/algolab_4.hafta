#include <iostream>
#include <cmath>

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    int lastDigit = num % 10;
    int digits = static_cast<int>(log10(num)) + 1;
    int firstDigit = static_cast<int>(num / pow(10, digits - 1));

    std::cout << "First digit: " << firstDigit << std::endl;
    std::cout << "Last digit: " << lastDigit << std::endl;

    return 0;
}