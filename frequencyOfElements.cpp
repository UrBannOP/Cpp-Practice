#include<iostream>

int main(){
     int size;

     std::cout << "Enter The size of the array: ";
     std::cin >> size;

     int *arr = NULL;
     arr = new int[size + 1];
     for (int i = 0; i < size; i++)
     {
          std::cout << "Element #" << i + 1 << ": ";
          std::cin >> arr[i];
     }   
     int count=0;

     for(int k=0;k<size;k++){
          bool Counted=false;
          for(int j=0;j<k;j++){
               if(arr[j]==arr[k]){
                    Counted=true;
                    break;
               }
          }
          if(Counted){
               continue;
          }

          for(int i=0;i<size;i++){
               if(arr[i]==arr[k]){
                    count++;
               }
          }
          std::cout << arr[k] << " is occured: " << count << " times \n";
          count=0;
     }

     return 0;
}