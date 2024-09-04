/* Temperature Advice:
Write a program that takes a temperature value as input and uses if statements to print advice based on the temperature:
Above 30: "It's hot outside, stay hydrated!"
Between 20 and 30: "The weather is nice and warm."
Between 10 and 19: "It's a bit chilly, wear a jacket."
Below 10: "It's cold outside, stay warm!"
 */

#include<stdio.h>
#include<stdlib.h>

int main(){

float temperature;


printf("\nEnter your current local temperature: \t");
scanf("%f", &temperature);


if(temperature>=30){
	printf("\n\tAdvisory: It's hot outside, stay hydrated!!\n");
}
else if(temperature>=20 && temperature<30){

	printf("\n\tAdvisory: the weather is nice and warm!\n");
}
else if(temperature >=10 && temperature<20){

	printf("\n\tAdvisory: it's a bit chilly, wear a jacket.\n");
}
else{

	printf("\n\tAdvisory: It's cold outside, stay warm!\n");
}

return EXIT_SUCCESS;
}
