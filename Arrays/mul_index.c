#include <stdio.h>

int main(){

     int size = 10;
     int arr[size];
     int arr1[size];
     long long mul;
           
           printf("Enter the first arrays numbers:\n");
           for(int i = 0; i < size; ++i){
               scanf("%d",&arr[i]);
           }
           printf("Enter the second arrays numbers:\n");
           for(int i = 0; i < size; ++i){
               scanf(" %d",&arr1[i]);
           }
           printf("\n");

            for(int i = 0; i < size;++i){
                mul = arr[i] * arr1[i];
                printf("%d * %d = %lld\n",arr[i],arr1[i],mul);
            }


 }
