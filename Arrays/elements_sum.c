#include <stdio.h>

int main(){

     int arr[10];
         printf("Enter the numbers: \n");

         int max = arr[0];
         for(int i = 0; i < 10; ++i){
             scanf("%d",&arr[i]);
             if(max < arr[i]){
                max = arr[i];
             }   
         }
         int min = arr[0];
         for(int i = 0; i < 10;++i){
             if(min > arr[0]){
                min = arr[0];
             }
         }
         printf("The sum of min and max numbers = %d \n",max+min);

      return 0;   


 }
