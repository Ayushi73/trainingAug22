//1. Write a program to perform simple arithmetic operation on two integers.
#include<stdio.h>

int main(){
int a,b;

printf("Enter the values of a and b:\t ");
scanf("%d %d", &a, &b);

printf("\nSum of the numbers is: %d\n", a+b);

printf("\nDifference of the numbers is: %d\n", a-b);

printf("\nProduct of the numbers is: %d\n", a*b);
printf("\nDivision of the numbers is: %d\n", a/b);
printf("\nModulo of the numbers is: %d\n", a%b);
return 0;
}
