#include <iostream>
double comparison(double a, double b){
     if(a>=b){
          return a;
     }
     return b;
}
double assign(double arr[],int size){
    double x=arr[0],y;
     for (int i=1;i<size;i++){
          y= arr[i];
          x=comparison(x,y);
    }
    return x; 
}

int main(){
     int size;

     std::cout << "Enter the number of entries: ";
     std::cin >> size;

     if(size<=0){
          std::cout << "Invalid Size!";
          return 1;
     }

     double *data=NULL;
     data=new double[size];

     for(int i=0;i<size;i++){
          std::cout << "Enter #" << i+1 << " number: ";
          std::cin >> data[i];
     }

     std::cout << "Greatest number from all the entries is: " << assign(data,size);

     delete[] data;
     return 0;
}