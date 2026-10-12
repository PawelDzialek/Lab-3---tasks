#include <iostream>

int main() {
    int age;

    // Prompt the user for input
    std::cout << "40";
    std::cin >> age;

    // age 18 or above
    if (age >= 18) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        std::cout << "You are not eligible to vote." << std::endl;
    }

    return 0;
}