#include <stdio.h>

int main(){

           int num1,num2;
           int res = 1;
           char op;

           printf("Enter the option ( +  -  *  / )\n^ for square of numbers\n~  to calculate any power of a number.  \n");
           scanf(" %c",&op);

           if(op == '~'){
              int x,y;
              printf("Enter the base number.\n");
              scanf("%d",&x);
              printf("Enter the exponent.\n");
              scanf("%d",&y);
              int i = y;
              while(y){
              res *= x;
              --y;
           }printf("%d to the power of %d is equal to %d \n",x,i,res);
           }else if(op == '^'){
              int sq;
              printf("Enter the number whose square you want to calculate.\n");
              scanf("%d",&sq);
              printf("The square of %d = %d \n",sq,(sq*sq));
           }else if(op == '+'){
              printf("Please enter two numbers: \n");
              scanf("%d %d",&num1,&num2);
              printf("%d + %d = %d \n",num1,num2,(num1+num2));
           }else if(op == '-'){
              printf("Please enter two numbers: \n");
              scanf("%d %d",&num1,&num2);
              printf("%d - %d = %d \n",num1,num2,(num1-num2));
           }else if(op == '*'){
              printf("Please enter two numbers: \n");
              scanf("%d %d",&num1,&num2);
              printf("%d * %d = %d \n",num1,num2,(num1*num2));
           }else if(op == '/' && num2 != 0){
              printf("Please enter two numbers: \n");
              scanf("%d %d",&num1,&num2);
              printf("%d / %d = %d \n",num1,num2,(num1/num2));
           }else{
              printf("Division by zero is not allowed! \n");
           }
      return 0;
}
