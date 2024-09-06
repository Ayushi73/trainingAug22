/*4. Write a C program to determine whether a given positive integer is an Armstrong number. An Armstrong number (also known as a narcissistic number or pluperfect number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits. Your program should:

i. Prompt the user to enter a positive integer.
ii. Determine the number of digits in the number.
iii. Calculate the sum of each digit raised to the power of the total number of digits.
iv Compare the calculated sum to the original number to determine if it is an Armstrong number.
v. Print "Armstrong number" if the number is an Armstrong number, otherwise print "Not an Armstrong number".*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int num;

printf("\nEnter a positive integer:\t");
scanf("%d", &num);

int tmp_1, tmp_2;
tmp_1=num;
tmp_2=num;

int ctr=0; // number of digits in num
for (int i=0; tmp_1!=0 ; i++){
	ctr++;
	tmp_1=tmp_1/10;
}

int power;
power=ctr;


int sum=0;
int digit=0;
int digit_pow=0;
for(int i=0; tmp_2!=0 ; i++){

	digit = tmp_2%10;

	tmp_2 = tmp_2/10;

	digit_pow= pow(digit,ctr);
	sum=sum+digit_pow;
	 
}

if(sum == num){
printf("\nStatus : Armstrong number. \n");
}

else {
printf("Status : Not an Armstrong number.\n");
}


return EXIT_SUCCESS;
}

