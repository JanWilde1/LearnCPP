#include <iostream>
#include <string>

#include "Basics.h"

std::string programs[] = {
    "Double Number"
};

int main() {
    std::cout << "--Choose an Option--" << std::endl;
    for (int i = 0; i < std::size(programs); i++) {
        std::cout << i+1 << ": " << programs[i] << std::endl;
    }

    std::cout << "\nSelection: ";

    int programChoice;
    std::cin >> programChoice;

    switch (programChoice) {
        case 1:
            doubleNumber();
            break;
        default:
            std::cout << "Invalid Option" << std::endl;
            break;
    }

    return 0;
}

void doubleNumber() {
    std::cout << "Enter an Integer to Multiply by Two: ";

    int numIn;
    std::cin >> numIn;

    if (std::cin.fail()) {
        std::cout << "Number is not a number." << std::endl;
        return;
    }

    std::cout << numIn << std::endl;
    std::cout << "Double " << numIn << " is " << numIn * 2 << std::endl;
}