#include <stdio.h>

int main(){

    int num;
    int fac = 1;

        printf("Enter the number:\n");
        scanf("%d",&num);

        for(int i = 1; i <= num; ++i){
            fac *= i;
        }
        printf("%d! = %d\n",num,fac);
    
    return 0;

}
