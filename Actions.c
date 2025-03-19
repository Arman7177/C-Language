#include <stdio.h>

int main(){

	   int num1,num2;

	      printf("Please enter two numbers: \n");
	      scanf("%d %d", &num1, &num2);

              printf("%d + %d = %d \n",num1,num2,(num1+num2));
	      printf("%d - %d = %d \n",num1,num2,(num1-num2));
	      printf("%d * %d = %d \n",num1,num2,(num1*num2));

	      if(num2){
	      printf("%d / %d = %.2f \n",num1,num2,((float)num1/num2));
	      }else{
		  printf("Division by zero is not allowed: \n");
	      }

	      return 0;

}

