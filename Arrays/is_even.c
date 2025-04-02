#include <stdio.h>

int main(){
     int size = 10;
     int i;
     int arr[size];

          printf("Enter the numbers:\n");

          for(i = 0; i < 10; ++i){
              scanf("%d",&arr[i]);
          }

          int result[size];
          int left = 0; 
          int right = size -1;       
          
          for(i = 0; i < size ; ++i){
             if(arr[i] % 2 == 0){
                 result[left] = arr[i];
                 ++left;
             }else{
                 result[right] = arr[i];
                 --right;
             }     
        }
         printf("\n");
          for(i = 0; i < 10; ++i){
              printf("%d\n",result[i]);
          }

     return 0;



    }
