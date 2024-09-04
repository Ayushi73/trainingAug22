//To calculate Area and Circumference of a circle

#include<stdio.h>
#include<stdlib.h>
int main(){
float radius;
#define PI 3.14 // don't put semicolon after #define statement

printf("Enter the value of radius of the cirlce:\t");
scanf("%f", &radius);

float area=PI*radius*radius; 
float circumference=2*PI*radius;

printf("Area of the circle is %f\nCircumference of the circle is %f.\n", area, circumference);

return EXIT_SUCCESS;

}
