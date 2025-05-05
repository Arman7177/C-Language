#include <stdio.h>

int main(){

     int arr[4][3] = {{1,1,1},{1,1,1},{1,1,1},{1,1,1}};
     int row = 4;
     int col = 3;

     for(int i = 0; i < row; ++i){
         for(int j = 0; j < col; ++j){
             arr[i][j] = (i % 2) * arr[i][j];
             printf("%d",arr[i][j]);        
         }
             printf("\n");
     }    
   return 0;
 }
