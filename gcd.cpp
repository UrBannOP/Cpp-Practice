#include <iostream>

int gcd(int a, int b){
     if (b==0){
          return a;
     }
     int remainder = a%b;
     return gcd(b,remainder);
}

int main(){
     int a,b,result;

     std::cout << "Enter First number: ";
     std::cin >> a;
     std::cout << "Enter Second number: ";
     std::cin >> b;

     if(a==0 && b==0){
          std::cout << "GCD for zero is undefined!";
          return 0;
     }
     result=gcd(a,b);
     if (result<0){
          std::cout << "GCD for " << a << " and " << b << " is " << -result;
          return 0;
     }

     std::cout << "GCD for " << a << " and " << b << " is " << result;

     return 0;
}