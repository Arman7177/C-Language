#include <stdio.h>

int main(){

       int arr[10];
          
          printf("Enter the numbers:\n");
       
          for(int i = 0; i < 10;++i){
              scanf("%d", &arr[i]);
          }
          printf("\n");
          
          for(int i = 9; i >=0;--i){
              printf("%d\n",arr[i]);
          }
          return 0;
 }
