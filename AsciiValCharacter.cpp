#include <iostream>

int main(){
     char ch;
     std::cout << "Enter a character: ";
     std::cin >> ch;

     int AsciiVal=int(ch);

     std::cout << "Ascii value of " << ch << " is " << AsciiVal;
 
     return 0;
}