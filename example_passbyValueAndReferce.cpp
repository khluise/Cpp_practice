#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Coca-cola";
    std::string y = "Pepsi";

    swap(x,y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n'; 

    return 0;
}

// void swap(std::string x, std::string y){     // pass by value
                                                // don't work in this case

void swap(std::string &x, std::string &y){      // pass by ref instead of
                                                // copying a value passes
                                                // the mem. address
    std::string temp; 
    temp = x;
    x = y;
    y = temp;

}
