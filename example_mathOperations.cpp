#include <iostream>
#include <cmath>

int main()
{
    double x = 7.777;
    double y = 4;
    double max, min;
    double z;

    max = std::max(x,y);
    min = std::min(x,y);

    std::cout << max << '\n';
    std::cout << min << '\n';
    
    z = pow(x,y);
    std::cout << z << '\n';

    z = sqrt(x);
    std::cout << z << '\n';

    z = round(x);
    std::cout << z << '\n';
    
    z = ceil(x);
    std::cout << z << '\n';
    
    return 0;
}
