#include <iostream>
#include <cctype> 

int main() {
    std::string cumle;
    std::cout << "Bir cumle girin: ";
    std::getline(std::cin, cumle);

    for (char &c : cumle) {
        if (std::islower(c)) {
            c = std::toupper(c);
        }
    }

    std::cout << "Cumlenin buyuk harfli hali: " << cumle << std::endl;

    return 0;
}