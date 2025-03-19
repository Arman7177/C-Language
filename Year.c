#include <stdio.h>

int main(){

        int age;

        printf("Please enter your age in years: \n");
        scanf("%d", &age);

        int day = age * 365;

        printf("%d years = %d days: \n", age,day);

        return 0;

}


