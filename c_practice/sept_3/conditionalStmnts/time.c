//10. Write a program that converts time in minutes to time in hours and minutes. Use #define or const to create a symbolic constant for 60.

#include<stdio.h>
#include<stdlib.h>

int main(){

#define MIN 60

int timeInMins;// input time from the user in minutes
int hours, minutes;

printf("\nEnter time in minutes: ");
scanf("%d", &timeInMins);

hours=timeInMins/MIN;
minutes=timeInMins%MIN;

printf("\nCorresponding time in hours and minutes is: %d hours and %d minutes)\n", hours, minutes);

return EXIT_SUCCESS;
}
