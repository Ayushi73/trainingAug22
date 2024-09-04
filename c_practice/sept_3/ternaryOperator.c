//4. Write a program that uses the ternary operator (?:) to find the maximum of two numbers.

#include<stdio.h>
#include<stdlib.h>

int main(){

int a, b;
printf("\n\nEnter the values of a and b:\t ");
scanf("%d %d", &a, &b);

printf("%d is the bigger number\n\n", (a>b)?a:b);

return EXIT_SUCCESS;
}
