#include <stdio.h>

int main(){

     int arr[10];
     int arr1[10];
     int same = 0;

         printf("Enter the first arrays:\n");
         for(int i = 0; i < 10; ++i){
             scanf("%d",&arr[i]);
         }
  
         printf("Enter the second arrays:\n");
         for(int i = 0; i < 10; ++i){
             scanf("%d",&arr1[i]);
         }
         for(int i = 0; i < 10; ++i){
              if(arr[i] != arr1[i]){
                 same = 1;
                 break;
              }
         }
         
         if(same){
            printf("Diferent arrays\n");
         }else{
            printf("The same  arrays\n");
         }


    return 0;


  }
