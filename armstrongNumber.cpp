#include <iostream>
#include <cmath>

int main(){

     int number, anum=0;
     int rem=0;

     std::cout << "Enter a number: ";
     std::cin >> number;

     int temp=number;
     int length=log10(number)+1;             //length of the number

     while (temp!=0)
     {
          rem=temp%10;
          anum+=pow(rem,length);
          temp/=10;
     }
     
     if(number==anum){
          std::cout << number << " is an armstrong number";
     }
     else{
          std::cout << number << " is not an armstrong number";
     }

     return 0;
}