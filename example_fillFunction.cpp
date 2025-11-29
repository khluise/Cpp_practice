#include <iostream>

int main(){
    // fill() = Fills a range of elements with specified value
    //          fill(begin, end, value)

    const int size = 10;
    std::string foods[size];

     fill(foods, foods + (size/2), "Biryani");
    fill(foods + (size/2), foods + size, "Mutton Chap");

    for(std::string food: foods){
        std::cout << food << '\n';
    }

    return 0;
}
