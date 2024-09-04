//3. write a  C program that performs temperature conversions between Celsius to Fahrenheit.

#include<stdio.h>
#include<stdlib.h>
int main(){

float tempC, tempF; //tempC: temperature in Celcius, tempF: temperature if farenheit
printf("\n\nEnter the value of temperature in celcius: \t ");
scanf("%f", &tempC);

tempF=32+tempC*9/5;

printf("Corresponding temperature in farenheit is : %f.\n\n", tempF);
return EXIT_SUCCESS;
}
