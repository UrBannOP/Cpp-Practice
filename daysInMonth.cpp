/*Program to demonstrate class implementation and constructor overloading.*/

#include <iostream>
#include <string>

class month{
     private:
          int n;
     public:
          month(int number){
               if (number>0 && number<=12){
                    n=number;
               }
               else{
                    n=0;
                    std::cout << "Invalid Month";
               } 
          }
          month(std::string input){
               if (input == "January" || input== "March" || input=="May"|| input=="July"|| input=="August"|| input=="October"|| input=="December" ){
                    n=1;
               }
               else if (input=="April"|| input=="June"|| input=="September"|| input=="November"){
                    n=4;
               }
               else if(input=="February"){
                    n=2;
               }
          }
          void days(){
               switch (n)
               {
               case 1: 
               case 3:
               case 5:
               case 7:
               case 8:
               case 10:
               case 12:
                    std::cout << "The month has 31 days";        
                    break;
               case 4:
               case 6:
               case 9:
               case 11:
                    std::cout << "The month has 30 days";
                    break;
               case 2:
                    std::cout << "February has 28 days and 29 days in a leap year";
                    break;     
               default:
                    break;
               }

          } 
};

int main(){

     std::string input;

     std::cout << "Enter a month number or full name(should begin with capital letter): ";
     std::cin >> input;

     if(input[0]>='0' && input[0]<='9'){
          int number;
          if(size(input)>1){
               number=(input[0]-'0')*10+input[1]-'0'; //converts string to integer
          }       
          else{
               number=input[0]-'0';
          } 
         
          month m(number);
          m.days();
     }
     else {
          month m(input);
          m.days();
     }
     
     return 0;
}