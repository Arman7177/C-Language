#include <stdio.h>

int main(){

         int arr[10];

             printf("Enter the number:\n");
             
             for(int i = 0; i < 10;++i){
                 scanf("%d",&arr[i]);
             }
             int max = arr[0];

             for(int i = 0; i < 10;++i){
                 if(max < arr[i]){
                    max = arr[i];
                 }
             }printf("The max = %d\n",max);

       return 0;

 }
