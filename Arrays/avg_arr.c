#include <stdio.h>

int main(){
     int size = 10;
     int arr[size];
     int sum;
              
          printf("Enter the numbers:\n");

          for(int i = 0; i < size;++i){
              scanf("%d",&arr[i]);
              sum += arr[i]; 
          }
          printf("The average of this numbers = %.2f\n",(float)sum/size);
 }
