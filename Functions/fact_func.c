#include <stdio.h>

   long long fact(int num);

int main(){

       int num;
       printf("Enter the number:\n");
       scanf("%d",&num);


       printf("!%d = %lld\n",num,fact(num));

       return 0;

  }
   long long fact(int num){
       int fact = 1;
       for(int i = 1; i <= num;++i){
           fact *= i;
       }
       return fact;
   }
