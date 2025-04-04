#include <stdio.h>

long long fib(int num);

int main(){
    
     int num;

         printf("Enter the index of Fibonachi number:\n");
         scanf("%d",&num);

         printf("%lld\n",fib(num));

      return 0;   
  }
  
  long long fib(int num){
      long long a = 1,b = 1,res = 1;
      if(num == 0 || num == 1){return 1;}
      for(int i = 2;i <= num;++i){
          res = a+b;
          a = b;
          b = res;
      }
      return res;
      }
