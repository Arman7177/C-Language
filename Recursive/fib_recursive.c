#include <stdio.h>

int fib(int num);

int main(){

    int num;

        printf("Enter the index of Fibonachi number:\n");
        scanf("%d",&num);

        printf("%d\n",fib(num));

    return 0;

}
  int fib(int num){
       if(num == 0 || num ==1){return 1;}
       return fib(num - 1)+fib(num - 2);
  }
