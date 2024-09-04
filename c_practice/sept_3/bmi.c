//Write a program that calculates the Body Mass Index (BMI) based on user input for weight (in kg) and height (in meters). (Formula bmi =weight/(height * height)
#include<stdio.h>
#include<stdlib.h>

float main(){

float height, weight;

printf("\n\n\tEnter weight in kg: \t");
scanf("%f", &weight);

printf("\n\n\tEnter height in meters: \t");
scanf("%f", &height);

float bmi;
bmi=(weight/(height*height));

printf("\nYour Body Mass Index is: %f\n", bmi);

return EXIT_SUCCESS;
}
