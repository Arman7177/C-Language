#include <stdio.h>

int main(){
    
     int arr[]={1,2,1,1,1,1,1,1};
     int size = sizeof(arr)/sizeof(arr[0]);
     int sorted = 0;
     int num = 0;

     for(int i = 0; i < size - 1 ;++i){
          if(arr[i]  != arr[i+1]){
             num = arr[i+1]; 
             sorted = 1;
             break;
          }
    }
    if(sorted){
       printf("The unique number is %d\n",num);
    }else{
       printf("All numbers are same\n");
    }


 }
