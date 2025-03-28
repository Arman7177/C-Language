#include <stdio.h>

int main(){

     int size = 7;
     int arr[size];
     float res;

         printf("Enter the numbers:\n");
         
         for(int i = 0; i < size; ++i){
             scanf("%d",&arr[i]);
             res = ((float)arr[i] / size);
             printf("%d / %d = %f\n",arr[i],size,res);    
         }
         
   return 0;

}
