#include <iostream>

int main(){

     int number;
     int rev=0,rem;

     std::cout << "Enter a number: ";
     std::cin >> number;
     
     int temp=number;

     while(temp!=0){
          rem=temp%10;
          rev=rev*10+rem;
          temp/=10;
     }

     if(rev==number){
          std::cout << number << " is a Palindrome";
     }
     else{
          std::cout << number << " is not a palindrome \n";
          std::cout << "Reverse of the number is " << rev;
     }

     return 0;
}