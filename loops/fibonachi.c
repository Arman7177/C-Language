#include <stdio.h>

int main(){
      
      int num;
       
          printf("Enter the index of Fibonachi numbers:\n");
          scanf("%d",&num);
          
          int a = 1,b = 1,fib = 1;
          
          if(num == 0 || num == 1){
             fib = 1;
          }else{
             for(int i = 2;i <= num;++i){
                 fib = a+b;
                 a = b;
                 b = fib;
             }
          }
          printf("%d index of Fibonachi = %d\n",num,fib);
       
       return 0;

 }
