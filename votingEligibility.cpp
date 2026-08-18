#include <iostream>

int main(){

     int age;

     std::cout << "Enter the age of the voter: ";
     std::cin >> age;

     if(age>=18){
          std::cout << "Person is Eligible to vote";
     }
     else{
          std::cout << "Person is ineligible to vote";
     }

     return 0;
}