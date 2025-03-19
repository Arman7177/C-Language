#include <stdio.h>

int main(){

	       float weight;
	       float height;

               printf("Please enter your weight in kilograms: \n");
	       scanf("%f", &weight);
	       printf("Please enter your height in in meters: \n");
	       scanf("%f", &height);

	       float BMI = weight / (height * height);

	       printf("Your BMI is %f \n", BMI);

	       return 0;


}

