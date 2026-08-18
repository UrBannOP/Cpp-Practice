#include <iostream>

int main(){

     double n;
     std::cout << "Enter a number: ";
     std::cin >> n;

     if(n>0){
          std::cout << n << " is Positive";
     }
     else if(n<0){
          std::cout << n << " is Negative";
     }
     else{
          std::cout << "Zero";
     }


     return 0;
}