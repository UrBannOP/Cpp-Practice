#include <iostream>

int main(){

     double principle, rate, time;
     
     std::cout << "Enter Priciple amount: ";
     std::cin >> principle;
     std::cout << "Enter the rate of intrest: ";
     std::cin >> rate;
     std::cout << "Enter the time period (in years): ";
     std::cin >> time;

     double simpleIntrest = (principle*rate*time)/100;
     double amount = principle+simpleIntrest;

     std::cout << "Simple Intrest is " << simpleIntrest << "\n";
     std::cout << "Total amount is " << amount;


     return 0;
}