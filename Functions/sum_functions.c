#include <stdio.h>

int sum(int num);

int main(){

    int num;
        printf("Enter the number:\n");
        scanf("%d",&num);

        printf("%d\n",sum(num));

    
 }

  int sum(int num){
      int digit;
      int add = 0;
          while(num){
              digit = num % 10;
              add = add + digit;
              num /= 10;
          }
       return add;   
  }
