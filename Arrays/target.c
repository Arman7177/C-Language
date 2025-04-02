#include <stdio.h>

int main(){

    int arr[10];

        printf("Enter the numbers:\n");

        for(int i = 0; i < 10;++i){
            scanf("%d",&arr[i]);
        }
         int target = 0;
         
         printf("Enter the target:\n");
         scanf("%d",&target);

         int index = -1;
         int flag  =  0;

         
         for(int i = 0; i < 10;++i){
             if(arr[i] == target){
                index = i;
                flag = 1;
             }
         }
         if(flag){
            printf("The index of target = %d\n",index);
         }else{
            printf("-1\n");
         }


    return 0;
  }
