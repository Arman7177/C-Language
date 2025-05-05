#include <stdio.h>

int main(){
    
     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
     int row = 3;
     int col = 3;
     int sum = 0;

         for(int i = 0; i < row; ++i){
             int temp = arr[i][i];
             arr[i][i] = arr[i][row-i-1];
             arr[i][row-i-1] = temp;
         }
         for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
               printf("%d",arr[i][j]);
            }
            printf("\n");
         }
    return 0;
  }
