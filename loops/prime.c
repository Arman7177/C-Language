#include <stdio.h>

int main(){

       int num,prime;
       
       printf("Enter the number \n");
       scanf("%d",&num);
       
       if(num < 2){
          prime = 0;
       }else{
            for(int i = 2; i * i <= num;++i){
               if(num % i == 0){
                  prime = 0;
                  break;
               } 
            } 
       }
       if(prime){
          printf("Number is prime\n");
       }else{
          printf("Number is not prime \n");
       }
    return 0;

 }
