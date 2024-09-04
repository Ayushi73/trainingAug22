/* BMI Calculator:
Extend BMI program and Use if statements to classify the BMI into categories:
Below 18.5: Underweight
18.5 to 24.9: Normal weight
25 to 29.9: Overweight
30 and above: Obesity*/


#include<stdio.h>
#include<stdlib.h>
int main(){

float height, weight;

printf("\n\n\tEnter weight in kg: \t");
scanf("%f", &weight);

printf("\n\n\tEnter height in meters: \t");
scanf("%f", &height);

float bmi;
bmi=(weight/(height*height));

printf("\nYour Body Mass Index is: %f", bmi);

if (bmi < 18.5){
	printf("\nStatus: Underweight.\n");
}

else if(bmi >= 18.5 && bmi <= 24.9){

	printf("\nStatus: Normal weight.\n");
}
else if(bmi <= 29.9  && bmi >= 25 ){

	printf("\nStatus: Overweight.\n");
}

else{

	printf("\nStatus: Obesity.\n");
}

return EXIT_SUCCESS;
}
