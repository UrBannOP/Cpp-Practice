#include <iostream>

int main(){

     char c;

     std::cout << "Enter a character: ";
     std::cin >> c;

     int ascii=int(c);

     if(ascii>=65 && ascii<=90){
          std::cout << c << " is an Uppercase Alphabet";
          if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
               std::cout << " and is a vowel"; 
          }
     }
     else if(ascii>=97 && ascii<=122){
          std::cout << c << " is an Lowercase Alphabet";
          if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
               std::cout << " and is a vowel"; 
          }
     }
     else if(ascii>=48 && ascii<=57){
          std::cout << c << " is a digit";
     }
     else{
          std::cout << c << " is a Special Character";
     }

     return 0;
}