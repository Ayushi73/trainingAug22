//5. Extend the program to find the maximum of three numbers using nested ternary operators.

#include<stdio.h>
#include<stdlib.h>
int main(){
float a, b, c; // three int viables to be compared

printf("\n\nEnter the values of a, b and c:\t");
scanf("%f %f %f", &a, &b, &c);
printf("%f is the greatest number.\n\n", (a>b)?((a>c)?a:c):((b>c)?b:c));

return EXIT_SUCCESS;

}
