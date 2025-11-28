#include <iostream>
#include <limits>
#include <random>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player{};
    char computer{};

    player = getUserChoice();
    std::cout << "You choose: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer choose: ";
    showChoice(computer);
    
    chooseWinner(player, computer);

    return 0;
}


char getUserChoice() {
    char player;
    std::cout << "*************************\n";
    std::cout << "Rock-Paper-Scissors Game!\n";

    while (true) {
        std::cout << "Chose one of the following\n";
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";

        if (!(std::cin >> player)) {
            if (std::cin.eof()) {
                std::cout << "\nEOF detected. Input closed.\n";
                return 'q';   // graceful termination
            }

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Bad input. Try again.\n";
            continue;
        }

        if (player == 'r' || player == 'p' || player == 's')
            return player;

        std::cout << "Invalid choice. Try again.\n";
    }
}

char getComputerChoice(){
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<int> dist(0,2);

    int n = dist(gen);
    
    char choices[] = { 'r', 'p', 's'};
    
    return choices[n];
}

void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock\n";
                  break;
        case 'p': std::cout << "Paper\n";
                  break;
        case 's': std::cout << "Scissors\n";
                  break;
    }

}
void chooseWinner(char player, char computer){
    if (player == computer){
        std::cout << "It's a tie!\n";
    }
    else if ((player == 'r' && computer == 's') ||
             (player == 'p' && computer == 'r') ||
             (player == 's' && computer == 'p')){
             std::cout << "You win!\n";
    }
    else{
    std::cout << "Computer wins!\n";
    }
}
