#include <stdio.h>

int main(){

      int size = 10;
      int arr[size];
      int num;

          printf("Enter the numbers:\n");

          for(int i = 0; i < size;++i){
             scanf("%d",&arr[i]);
          }
          printf("Enter the value:\n");
          scanf("%d",&num);

          int value = 0;

          for(int i = 0; i < size;++i){
              if(num == arr[i]){
                 ++value;
                 break;
             }
          }
          if(value){
             printf("Yes\n");
          }else{
             printf("No\n");
          }
     return 0;     
}        
