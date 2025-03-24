#include <stdio.h>

int main(){

     int num,reversed = 0;
    
     printf("Enter the number: \n");
     scanf("%d", &num);
 
     if(num < 0){
        printf("- ");
        num = -num;

     }
      while(num){
          int digit = num % 10;
          reversed =reversed * 10 + digit;
          num /= 10;
      }
      while(reversed){
           printf("%d ",reversed % 10);
           reversed /= 10;
          }  
           printf("\n");
      return 0;


    }
