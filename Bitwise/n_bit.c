#include <stdio.h>

int main(){

    int num,index;
        printf("Enter the number\n");
        scanf("%d",&num);
        printf("Enter the index\n");
        scanf("%d",&index);

        printf("%d\n", (1<<index)|num);



 }
