#include <iostream>

int main() {
    // && = check if two conditions are true
    // || = check if at least one of two condition is true
    // ! = reverse the logical state of its operand

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;
    
    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!\n";
    }
    else{
        std::cout << "The tempearture is bad!\n";
    }

    return 0;

}
