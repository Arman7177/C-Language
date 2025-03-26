#include <stdio.h>

int main(){
      
       int num;
       int n = 56;
       char ch;

       printf("\tGuess the number from (1-100) \n");
       printf("\n");
       printf("Enter the number or type 'q' to exit \n");
       scanf("%d",&num);
          
          while(1){
           
           if(scanf("%c",&ch) != 1){
               continue;
           }
           if(ch == 'q'){
              printf("Thank you for using guessing game \n");
              break;
           }
            if(num < n){
              printf("Too Low\n");
              scanf("%d",&num);
            }else if(num > n){
              printf("Too high\n");
              scanf("%d",&num);
            }else{
                 printf("Congratulations you guess the number %d \n",n);
                 break;
            }
         }

 }
