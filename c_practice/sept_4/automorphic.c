/* C program to check if a number is an automorphic number (a number whose square ends in the same digits as the number itself).
Example:
Consider the number 76.
1. Calculate the square of the number:
      76*76=5776
2. Determine the number of digits in the original number:
	Number of digits in 76 is 2.
3. Therefore extract the last 2 digits from the square: (mod of 10 to the power 2)
       5776 mod 100 = 76
4. Compare the extracted digits with the original number:
	Extracted digits: 76
	Original number: 76
Since the extracted digits (76) match the original number (76), 76 is an automorphic number.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

int num, sqr;
int og_num;
og_num=num;


printf("\nEnter a positive integer: ");
scanf("%d", &num);

sqr = num*num;

int ctr=0; //counter, to count no. of digits in num

for(int i=0; num!=0; i++){

	num=num/10;
	ctr++;
	}


int comp=0;
int denominator=pow(10,ctr);//to be compared with num 
comp=sqr%denominator;
if(comp==og_num){
printf("\nAutomorphic\n");
}
else{
printf("\nNot automorphic\n");
}
printf("\n%d\n", comp);

return EXIT_SUCCESS;
}

