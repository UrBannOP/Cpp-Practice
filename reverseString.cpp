#include <iostream>
#include <string>
#include <stack>
int main(){

     std::string str;
     std::stack <char> reverse;
     int count=0;

     std::cout << "Enter a string: ";
     std::getline(std::cin,str);

     for(char c: str){
          reverse.push(c);
          count++;
     }

     for(int i=0;i<count;i++){
          std::cout << reverse.top();
          reverse.pop();
     }

     return 0;
}

/*Program to demonstrate implementation of stack*/