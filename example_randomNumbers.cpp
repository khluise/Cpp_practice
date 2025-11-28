#include <iostream>

int main()
{
    // Pseudo-random = NOT truly random (but close)

    srand(time(NULL));
    
    for(int i=1; i<=3; i++){
        int num = (rand() % 6) + 1;

        std::cout << num << '\n';
    }
    return 0;
}
