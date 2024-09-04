//1. program to find given number is Odd or Even

#include<stdio.h>
#include<stdlib.h>

int main(){

int num;
printf("\nEnter the number:\t ");
scanf("%d", &num);

if(num%2==0){
printf("\nThe number is even.\n");
}

else{
printf("\nThe number is odd.\n");
}

return EXIT_SUCCESS;
}
