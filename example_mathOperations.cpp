#include <iostream>
//#include <math>

int main()
{
    double x = 7;
    double y = 4;
    double max, min;
    
    max = std::max(x,y);
    min = std::min(x,y);

    std::cout << max;
    std::cout << min;

    return 0;
}
