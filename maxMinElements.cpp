#include <iostream>

int maximum(int arr[],int size,int max,int count=0){
     if(count==size){
          return max;
     }
     if(max<arr[count]){
          max=arr[count];
     }
     return maximum(arr,size,max,count+1);
}

int minimum(int arr[],int size,int min,int count=0){
     if(count==size){
          return min;
     }
     if(min>arr[count]){
          min=arr[count];
     }
     return minimum(arr,size,min,count+1);
}

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
     
     std::cout << maximum(arr,size,arr[0]) << "\n";
     std::cout << minimum(arr,size,arr[0]);

     return 0;
}