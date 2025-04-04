#include <stdio.h>

long long fact(int num);

int main(){

     int num;

         printf("Enter the number:\n");
         scanf("%d",&num);

         printf("%lld\n",fact(num));

      return 0;   
 }
   
   long long fact(int num){
        if(num < 0){return 0;}
        if(num == 0){return 1;}
        return num * fact(num - 1);
   }
