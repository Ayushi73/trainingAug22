//7. Write a C program that takes an integer input from the user and prints whether it is positive, negative, or zero.


#include<stdio.h>
#include<stdlib.h>

int main(){

float num;

printf("\nEnter a number: \n");
scanf("%f", &num);

if(num > 0){

	printf("You have entered a positive number.\n");
}

else if(num <0){

	printf("You have entered a negative number.\n");
}

else if(num ==0){
	printf("You have entered zero.\n");
}

else {
printf("***Invalid number. Try again.***");
}
return EXIT_SUCCESS;
}
