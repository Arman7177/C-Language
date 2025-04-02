#include <stdio.h>

int main(){
    int size = 10;
    int arr[size];
    int decrease = 1;
        printf("Enter the numbers:\n");

        for(int i = 0; i < size; ++i){
            scanf("%d",&arr[i]);
        }
        for(int i = 1; i < size;++i){
            if(arr[i] > arr[i-1]){
                 decrease = 0;
                 break;
            }
        }
        if(decrease){
           printf("Yes\n");
        }else{
           printf("no\n");
        }

     return 0;

 }
