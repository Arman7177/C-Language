#include <stdio.h>

int main(){

        int num,count = 0;

        printf("Enter the number \n");
        scanf("%d", &num);

        while(num){
            if((num & 1) == 1){
            ++count;
            }
            num>>=1;   
        }
        printf("%d \n",count);

    return 0;

 }
