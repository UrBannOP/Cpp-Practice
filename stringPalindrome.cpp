#include <iostream>

int main(){

     std::string str;
     
     std::cout << "Enter a string: ";
     std::cin >> str;

     int j=str.length()-1,flag=0;

     for(int i=0;i<str.length()/2;i++){
          if(str[i]!=str[j]){
               flag++;
               break;
          }
          j--;
     }

     if(flag==1){
          std::cout << "Not Palindrome";
     }
     else{
          std::cout << "Palindrome";
     }

     return 0;
}