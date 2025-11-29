#include <iostream>


int main(){
    // pointers = varable that stores a memory address of another varible
    //            sometimes it's easier to work with an address
    // & address-of operator
    // * dereference operator
    
    std::string name = "Luise";
    int age = 25;
    std::string players[5] = {"player1", "player2", "player3", "player 4",
                                "player5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pPlayers = players;        //arrays are alreay mem addrs
    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pPlayers << '\n';

    return 0;
}
