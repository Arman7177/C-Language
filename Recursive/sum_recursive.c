#include <stdio.h>

int sum(int num);

int main(){

    int num;
        printf("Enter the number\n");
        scanf("%d",&num);

        printf("%d\n",sum(num));
        
     return 0;

 }

  int sum(int num){
      if(num == 0){
         return 0;
      }
      return (num % 10)+sum(num / 10);
 }
