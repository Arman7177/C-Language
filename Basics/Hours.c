#include <stdio.h>

int main(){

            int hours,min;

            printf("Please enter the number of hours: \n");
            scanf("%d",&hours);

            min = hours * 60;

            printf("%d hours = %d minutes \n",hours,min);

            return 0;

}
