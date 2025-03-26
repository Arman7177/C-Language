#include <stdio.h>

int main(){

      int num;
          
          printf("Enter the number \n");
          scanf("%d", &num);

          int res = num & 1;

          if(res){
             printf("Number is Odd\n");
          }else{
             printf("Number is Even \n");
          }

      return 0;
 }
