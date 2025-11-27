#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 0) {
        std::cout << "You haven't been born yet!" << '\n';
    }
    
    else if(age > 100) {
        std::cout << "You belong to a museum!" << '\n';
    }

    else if(age >= 18){
        std::cout << "You are an adult!" << '\n';
    }
        else{
        std::cout << "You are not old enough!" << '\n';
    }
    
    return 0;
}
