#include <stdio.h>

int main(){
    
    int size = 10;
    char arr[size];

          printf("Enter the numbers:\n");

          for(int i = 0; i < size ; ++i){
              scanf("%c",&arr[i]);
         } 
         
          for(int i = 0; i < size /2 ; ++i){
            int temp = arr[i];
            arr[i] = arr[size -1 -i];
            arr[size -1 -i] = temp;
          }

          for(int i = 0; i < size ; ++i){
              printf("%c",arr[i]);
          }

  }
