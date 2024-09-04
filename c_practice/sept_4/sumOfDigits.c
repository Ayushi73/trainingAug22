//Write a program that prompts the user for a positive integer and then computes the sum of all the digits of the number. For example, if the user enters 2784, then the program reports 21. If the user enters 59, then the program reports 14. The program should work for any number having one to ten digits.


#include<stdio.h>
#include<stdlib.h>

int main(){

int num=0;
int sum =0;

printf("\nEnter a positive integer: ");
scanf("%d", &num);

for(int i=0; num!=0 ; i++){

sum =sum+(num%10);
num=num/10;

}

printf("\nSum of its digits is : %d\n", sum);


return EXIT_SUCCESS;
}

