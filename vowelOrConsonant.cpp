#include <iostream>

int main(){

     char c;
     std::cout << "Enter a  character: ";
     std::cin >> c; 

     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
          std::cout << c << " is a Vowel!";
          return 0;
     }
     std::cout << c << " is a Consonant!";
     return 0;
}