#include <iostream>

enum Denomination {
    FIVE_HUNDRED,
    TWO_HUNDRED,
    ONE_HUNDRED,
    FIFTY,
    TWENTY,
    TEN,
    FIVE,
    TWO,
    ONE
};

int main(){

    int n; 
    int money[9] = {0};
    int temp = n;

    std::cout << "Enter the amount: ";
    std::cin >> n;

    while (n != 0)
    {
        if(n >= 500){
            n -= 500;
            money[FIVE_HUNDRED]++;
        }
        else if(n >= 200){
            n -= 200;
            money[TWO_HUNDRED]++;
        }
        else if(n >= 100){
            n -= 100;
            money[ONE_HUNDRED]++;
        }
        else if(n >= 50){
            n -= 50;
            money[FIFTY]++;
        }
        else if(n >= 20){
            n -= 20;
            money[TWENTY]++;
        }
        else if(n >= 10){
            n -= 10;
            money[TEN]++;
        }
        else if(n >= 5){
            n -= 5;
            money[FIVE]++;
        }
        else if(n >= 2){
            n -= 2;
            money[TWO]++;
        }
        else if(n >= 1){
            n -= 1;
            money[ONE]++;
        }
    }

    std::cout << "The amount " << temp << "Rs. Contains: " << "\n";
    std::cout << money[FIVE_HUNDRED] << " 500Rs. Notes" << "\n";
    std::cout << money[TWO_HUNDRED] << " 200Rs. Notes" << "\n";
    std::cout << money[ONE_HUNDRED] << " 100Rs. Notes" << "\n";
    std::cout << money[FIFTY] << " 50Rs. Notes" << "\n";
    std::cout << money[TWENTY] << " 20Rs. Notes" << "\n";
    std::cout << money[TEN] << " 10Rs. Notes" << "\n";
    std::cout << money[FIVE] << " 5Rs. Coins" << "\n";
    std::cout << money[TWO] << " 2Rs. Coins" << "\n";
    std::cout << money[ONE] << " 1Rs. Coins";

    return 0;
}