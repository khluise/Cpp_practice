#include <iostream>

int main() {
    // type conversion == conversion a value of one data type to another
    //      implicit   = automatic
    //      Explicit   = Precede value with new data type 
    
    int x = 3.14;
    char y = 100;
    int number1 = 22;
    int number2 = 7;

    std::cout << x << '\n'; //implicit conversion
    std::cout << y << '\n';

    std::cout << number1/double(number2) << '\n'; //Explicit conversion

    return 0;
}
