#include <stdio.h>

int main(){
       int a,b;
       int count = 0;

       printf("Enter two numbers to define a range\n");
       scanf("%d %d",&a,&b);
       
       if(a>b){
         int temp = a;
         a = b;
         b = temp;
       }
       
       for(int i = a; i <= b; ++i){
           if(i % 5 == 0){
           ++count;
           }
       }
        printf("Count of numbers divisible by 5 in range [%d, %d]: %d\n", a, b, count);

    return 0;
       
 }
