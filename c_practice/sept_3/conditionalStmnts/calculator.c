/*9. Write a C program that simulates a simple calculator using a switch statement. The user should input two numbers and an operator (+, -, *, /) and the program should print the result.*/


#include<stdio.h>
#include<stdlib.h>

int main(){

float num1, num2;
char operator;

printf("\nEnter the first number:\t");
scanf("%f", &num1);

printf("\nEnter the second number:\t");
scanf("%f", &num2);

printf("\nEnter the operator:\t");
scanf(" %c", &operator);

switch(operator){

case '+':
		printf("\nResult of adding the two numbers is %f.\n", num1+num2);
		break;

case '-':
		printf("\nResult of subtracting the two numbers is %f.\n", num1-num2);
		break;

case '*':
		printf("\nResult of multiplying the two numbers is %f.\n", num1*num2);
		break;

case '/':
		printf("\nResult of dividing the two numbers is %f.\n", num1/num2);
		break;

default: 
		printf("\nInvalid entry, Try again.\n");
		}


return EXIT_SUCCESS;
}
