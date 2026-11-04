#include <bits/stdc++.h>
using namespace std;

int main(){

     int arr[] = {1,2,3,4,2,4,2,1,3,1,2,1};

     vector<int> uni;

     for(int i= 0;i<size(arr);i++){
          int j;
          for( j = 0; j < size(uni); j++){
               if(arr[i]==uni[j]){
                    break;
               }
          }
          if(j==size(uni)){
                    uni.push_back(arr[i]);
               }
     }

     for(auto z : uni){
          cout << z << " "; 
     }
     return 0;
}

