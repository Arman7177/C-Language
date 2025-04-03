#include <stdio.h>
     
  float avg(int arr[],int size);

int main(){
     int size = 5; 
     int arr[size];
          printf("Enter the numbers:\n");

          for(int i = 0; i < size;++i){
              scanf("%d",&arr[i]);
          }
          printf("%.2f\n",avg(arr,size));

     return 0;
 }
   
    float avg(int arr[],int size){
          int sum = 0;
          for(int i = 0; i < size;++i){
              sum += arr[i];
          }
          return (float)sum / size;
    } 
