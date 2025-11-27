#include <iostream>

int main() {
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int grade =75;

    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail!\n";

    int number = 7;
    number % 2 == 0 ? std::cout << "The number is Even.\n" : \
                std::cout << "The number is Odd.\n";
    
    bool hungry = false;
    std::cout << (hungry ? "You are hungry!\n" : "You are full!\n");

    return 0;
}
