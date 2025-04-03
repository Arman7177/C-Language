#include <stdio.h>

void print_inorder(int arr[],int size);

int main(){
     
     int size = 7;
     int arr[size];
        
          printf("Enter the numbers:\n");

                 for(int i = 0; i < size; ++i){
                     scanf("%d",&arr[i]);
                 }
                 print_inorder(arr,size);

      return 0;
 }

 void print_inorder(int arr[],int size){
     if(size == 0){
        return;
     } 
      printf("%d\n",arr[size -1]);
      print_inorder(arr,size-1);
     }
