#include <iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[] = {49.99, 69.34, 23.35, 74.4};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    std::cout << "$" << total << std::endl;
    return 0;
}

double getTotal(double prices[], int size){
    double total{};
    for(int i=0; i < size; i++){
        total += prices[i];
    }
    return total;
}
