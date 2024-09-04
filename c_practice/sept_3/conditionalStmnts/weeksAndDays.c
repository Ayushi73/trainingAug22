/*11. Write a program that asks the user to enter the number of days and then converts that value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days. Display results in the following format: 18 days are 2 weeks, 4 days.*/


#include<stdio.h>
#include<stdlib.h>
#define WEEK 7
int main(){

int daysInput, days , weeks; 

printf("\nEnter the number of days: \n");
scanf("%d", &daysInput);

weeks = daysInput / WEEK;
days = daysInput % WEEK;


if(days==1 && weeks != 1){

	printf("%d days are %d weeks and %d day\n\n", daysInput, weeks, days);
}

else if(weeks ==1 && days != 1){

	printf("%d days are %d week and %d days\n\n", daysInput, weeks, days);
}

else if (days ==1 && weeks ==1){

	printf("%d days are %d week and %d day\n\n", daysInput, weeks, days);
}

else {
printf("%d days are %d weeks and %d days\n\n", daysInput, weeks, days);
}


return EXIT_SUCCESS;
}
