#include <iostream>
#include <sstream>
#include <string>
#include <stack>
int main(){

    std::string name,word,temp;
    std::string lName;
    std::stack<std::string>sName;
    std::stack<char>abb;

    std::cout << "Enter the full name: ";
    std::getline(std::cin,name);

    std::stringstream ss(name);
    
    while(ss>>word){
        sName.push(word);
    }
    if(!sName.empty()){
        lName=sName.top();
        sName.pop();
    }

    while (!sName.empty()){
        temp=sName.top();
        abb.push(temp[0]);
        sName.pop();
    }
    
    while(!abb.empty()){
         std::cout << abb.top() <<". "; 
         abb.pop();
    }
    std::cout << lName;
    return 0;
}

// took a bit of help from ai about string stream 