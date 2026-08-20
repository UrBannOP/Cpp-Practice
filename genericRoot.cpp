#include<iostream>

int G_root(int n){
     int sign=1;
     if(n<0){
          n=-n;
          sign=-1;
     }
     int sum=0;
     while(n!=0){
          sum+=n%10;
          n/=10;
     }
     if(sum>=10){
          return sign*G_root(sum);
     }
     return sign*sum;
}


int main(){

     int number;
     
     std::cout << "Enter a number: ";
     std::cin >> number;

     std::cout << "Generic Root of " << number << " is " <<  G_root(number);

     return 0;
}