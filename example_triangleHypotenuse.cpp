#include <iostream>
#include <cmath>

int main() {
    double a = 3;
    double b = 4;
    double c{};

    c = sqrt(a*a + b*b);
    
    std::cout << "The hypotenuse of a right-angle triangle with sides " <<\
        a << " & " << b << " is " << c << '\n';

    return 0;
}
