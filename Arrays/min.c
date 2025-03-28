#include <stdio.h>

int main(){

      int arr[10];

      printf("Enter the numbers\n");
      
      for(int i = 0; i < 10;++i){
          scanf("%d",&arr[i]);
      }
     
      int min = arr[0];
      for(int i = 0; i < 10;++i){
          if(min > arr[i]){
             min = arr[i];
          }
      }
      printf("The min = %d\n",min);

    return 0;

 }
