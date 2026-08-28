#include <iostream>

int vowelCheck(char c){
     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
          return 0;
     }
     return 1;
}

int main(){

     int check;
     std::string str;

     std::cout << "Enter a String: ";
     std::getline(std::cin, str);
     
     for(int i=0;i<str.length();i++){
          check=vowelCheck(str[i]);
          if(check==0){
               str.erase(i,1);
               i--;
          }
     }
     std::cout << "String without any vowel: " <<str;
     return 0;
}