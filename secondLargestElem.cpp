#include <iostream>

int main(){

     int size;
      
     std::cout << "Enter the size: ";
     std::cin >> size;

     int *arr=NULL;
     arr=new int[size];
     
     for(int i=0;i<size;i++){
          std::cout << "Enter #" << i+1 << ": ";
          std::cin >> arr[i];
     }
     int max=arr[0],smax=arr[0];

     for(int i=0;i<size;i++){
          if(max<arr[i]){
               max=arr[i];
          }
     }
     for(int i=0;i<size;i++){
          if(arr[i]>smax){
               if(arr[i]!=max){
                    smax=arr[i];
               }
          }
     }

     std::cout << "Largest element is: " << max;
     std::cout << "Second largest element is: " <<  smax;

     return 0;
}