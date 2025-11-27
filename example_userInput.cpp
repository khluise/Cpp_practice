#include <iostream>

int main(){
    std::string name;
    int age;

    std::cout << "What's your name?: ";
        std::getline(std::cin >> std::ws, name); //this >> std::ws will 
                                                 //eleminate any white 
                                                 //spaces before user input
    
    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';

    return 0;
}
