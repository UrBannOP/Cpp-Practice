#include <iostream>

double cToF(double c){
     double f=(c*9.0/5.0)+32;
     return f;
}
double cToK(double c){
     double k=c+273.15;
     return k;
}
double fToC(double f){
     double c=(5.0/9.0)*(f-32);
     return c;
}
double fToK(double f){
     double k = (f - 32) * (5.0 / 9.0) + 273.15;
     return k;
}
double kToC(double k){
     double c=k-273.15;
     return c;
}
double kToF(double k){
     double f=k*(9.0/5.0)-459.67;
     return f; 
}

int main(){

     char unit1,unit2;
     double temp,result;

     std::cout << "Enter the unit of temperature(K,F,C): ";
     std::cin >> unit1;
     std::cout << "Enter the value of the tempertature: ";
     std::cin >> temp;
     std::cout << "Enter the unit of conversion temperature(K,F,C): ";
     std::cin >> unit2;

     if(unit1 == 'C'){
          switch (unit2)
          {
          case 'F':
               result= cToF(temp);
               break;
          case 'K':
               result= cToK(temp);
               break;    
          case 'C':
               result=temp;
               break;
          default:
               std::cout << "Invalid";
               return 0;
          }
     }
     else if(unit1 == 'F')
     {
          switch (unit2)
          {
          case 'C':
               result= fToC(temp);
               break;
          case 'K':
               result= fToK(temp);
               break;  
          case 'F':
               result=temp;
               break;
          default:
               std::cout << "Invalid";
               return 0;
          }
     }
     else if(unit1 == 'K')
     {
          switch (unit2)
          {
          case 'F':
               result= kToF(temp);
               break;
          case 'C':
               result= kToC(temp);
               break; 
          case 'K':
               result=temp;    
               break;     
          default:
               std::cout << "Invalid";
               return 0;
          }
     }
     else {
          std::cout << "Invalid";
          return 0;
     }

     std::cout << result;

     return 0;
}