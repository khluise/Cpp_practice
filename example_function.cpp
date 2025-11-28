#include <iostream>

void happyBirthday(std::string name, int age);

int main(){
    // function = a block of reusable code
    
    std::string name = "Luise";
    int age = 24;

    happyBirthday(name, age);

}

void happyBirthday(std::string name, int age){
    for(int i = 1; i <= 5; i++){
       if(i==4){
            std::cout << "Happy Birthday dear " << name << "!\n";
            continue;
        } 
        std::cout << "Happy Birthday to " << name << "!\n";
    }
    std::cout << "You are " << age << " years old!\n";
    std::cout << '\n';
}
