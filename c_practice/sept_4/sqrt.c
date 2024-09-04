//Write a program that prompts the user for a positive integer and then reports the closest integer having a whole number square root. For example, if the user enters 8, then the program reports 9. If the user enters 18, then the program reports 16.The program should work  for any number having one to seven digits.



#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

double result;//contains square of sq_rt
double num;
double sq_rt; //square root of num

printf("\nEnter a positive integer: ");
scanf("%lf", &num);

sq_rt = sqrt(num);
sq_rt=round(sq_rt);

result = sq_rt*sq_rt;


printf("\n\tResult: %.0lf\n\n", result);

return EXIT_SUCCESS;
}

