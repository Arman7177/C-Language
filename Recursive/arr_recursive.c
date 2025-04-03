#include <stdio.h>

void print_arr(int arr[],int size);


int main(){
    
    int size = 7;
     int arr[size];

         printf("Enter the numbers\n");
         
                for(int i = 0;i < size;++i){
                    scanf("%d",&arr[i]);
                }
            print_arr(arr,size);
         
         return 0;   
 }
    void print_arr(int arr[],int size){
         if(size == 0){
            return;
         }
         print_arr(arr,size - 1);
         printf("%d\n",arr[size - 1]);
 
 }
