#include <iostream>
#include <string>
int main(){
     
     int radius;
     std::string unit;
     double Pi = 3.14159;
     std::cout << "Enter the radius of the Circle: ";
     std::cin >> radius; 
     std::cout << "Enter the unit of the radius: ";
     std::cin >> unit;
     
     double area= Pi*radius*radius;
     double cirumference = 2*Pi*radius;

     std::cout<<"==================================================\n";
     std::cout<<"Area of the Circle is: " << area << " square " << unit <<"\n";
     std::cout<<"Circumference of the circle is: " << cirumference << " " << unit << "\n"; 
     std::cout<<"==================================================";


     return 0;
}