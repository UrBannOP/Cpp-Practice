#include <iostream>

int fibonacci(int n){
  
     if(n==0||n==1){
          return n;
     }
     return (fibonacci(n-1)+fibonacci(n-2));
}

int main(){

     int x;

     std::cout << "Enter the number of terms: ";
     std::cin >> x;

     for(int i=0;i<x;++i){
          std::cout << "term #" << i+1  << ": " << fibonacci(i) << "\n";
     }

     return 0;
}