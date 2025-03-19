#include <stdio.h>

int main(){

	    float cel;

	    printf("Please enter the temperature in Celsius \n");
        scanf("%f", &cel);

	    float far = (cel * 9/5)+32;

	    printf("%f \n", far);

	    return 0;

}



