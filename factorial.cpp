#include <iostream>

int factorial(int n){
     if(n==0||n==1){
          return 1;
     }
     return (n*factorial(n-1));
}

int main(){
     int num;
     
     while(true){
          std::cout << "Enter a whole number: ";
          std::cin >> num;
          if (num<0){
               std::cout << "Factorial of negative number is not possible \n";
               std::cout << "Please enter a positive integer! \nE";
               continue;
          }
          break;
     }
     std::cout << "Factorial of " << num << " is " << factorial(num);

     return 0;
}