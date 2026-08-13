#include <iostream>

int main(){

     int size,avg,total=0,temp;
     std::cout << "Enter the number of subjects: ";
     std::cin >> size;

     for(int i=0;i<size;i++){
          std::cout << "Enter #" << i+1 << " marks:";
          std::cin >> temp;
          total+=temp;
     }

     avg=total/size;

     std::cout << "Average marks is " << avg; 

     return 0;
}