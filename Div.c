#include <stdio.h>

int main(){
       int a,b;

          printf("Please enter two numbers: \n");
          scanf("%d %d", &a,&b);

          if(b){
          printf("%d\n", a%b);
          }else{
          printf("Division by zero is not allowed: \n");
          }

          return 0;
}


