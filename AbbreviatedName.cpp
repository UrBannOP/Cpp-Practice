#include <iostream>
#include <string>
int main(){
     
     std::string firstName,midName,lastname;

     std::cout << "Enter the Full Name: ";
     std::cin >> firstName >> midName >> lastname;

     std::string Abbreviation;
     Abbreviation += firstName[0];
     Abbreviation += ".";     
     Abbreviation += midName[0];
     Abbreviation += ".";
     Abbreviation += lastname;
     
     std::cout << Abbreviation;
     return 0;
}