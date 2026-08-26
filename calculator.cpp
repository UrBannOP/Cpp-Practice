#include <iostream>

double add(double a,double b){
    return a+b;
}
double sub(double a, double b){
    return a-b;
}
double mult(double a, double b){
    return a*b;
}
double divi(double a, double b){
    if (b==0){
        std::cout << "Division by zero is not possible";
        return 0;
    }
        return a/b;
}
int main(){
    double x,y;
    char op;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;

    std::cout << "Enter a operataion (+,-,*,/): ";
    std::cin >> op;

    switch(op){
        case '+':
            std::cout << "Addition: " << add(x,y);
            break;
        case '-':
            std::cout << "Substraction: " << sub(x,y);
            break;
        case '*':
            std::cout << "Multiplication: " << mult(x,y);
            break;
        case '/':
            std::cout << "Division: " << divi(x,y);
            break;
        default: 
            break;          
    }

    return 0;
}