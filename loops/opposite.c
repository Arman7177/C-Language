#include <stdio.h>

int main(){
    
    int num;

        printf("Enter the number:\n");
        scanf("%d",&num);
           
        if(num < 0){
           printf("- ");
           num = -num;
        }
           while(num){
               printf("%d ",num % 10);
               num /= 10;
           }
           printf("\n"); 
    
    return 0;
 }
