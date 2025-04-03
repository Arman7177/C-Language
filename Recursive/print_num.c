#include <stdio.h>


  void print_num(int num);


int main(){

    int num;

        printf("Enter the number\n");
        scanf("%d",&num);

        print_num(num);

     return 0;

 }

void print_num(int num){
      if(num < 0){
         return;
      }
       printf("%d\n",num);
       print_num(num-1);
  }   
