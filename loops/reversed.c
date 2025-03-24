#include <stdio.h>

int main(){
     
     int num,reversed = 0;

         printf("Enter the number:\n");
         scanf("%d",&num);

         while(num){
              int digit = num % 10;
              reversed = reversed * 10 + digit;
              num /= 10;
            }
            printf("%d\n",reversed);

       return 0;
  }
