#include <stdio.h>

int main(){
     
     int num,reversed = 0;

     printf("Enter the number \n");
     scanf("%d",&num);

     int temp = num;
     while(num){
         int digit = num % 10;
         reversed = reversed * 10 + digit;
         num /= 10;
     }
     if(temp == reversed){
       printf("The number is Polidrom \n");
     }else{
       printf("The number is not Polidrom \n");
     }
    
   return 0;

 }
