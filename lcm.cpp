#include <iostream>

int lcm(int a,int b){
     int lcm;
     if(a>b){
          lcm=a;
     }
     else{
          lcm=b;
     }

     while (true){
          if(lcm%a==0 && lcm%b==0){
               return lcm;
          }
          lcm++;
     }
}
int assign(int arr[],int n){
     int x=arr[0],y;
     for (int i=1;i<n;i++){
          y=arr[i];
          x=lcm(x,y);
     }
     return x;
}

int main(){
     int size;
     std::cout << "Enter the number of values: ";
     std::cin >> size;

     if(size<=0){
          std::cout << "Invalid number of values!";
          return 1;
     }

     int *data=NULL;
     data = new int[size];

     for(int i=0;i<size;i++){
          std::cout << "Enter #" << i+1 << ": ";
          std::cin >> data[i];
     }

     std::cout << "LCM is: " << assign(data,size);

     delete[] data;
     return 0;
}