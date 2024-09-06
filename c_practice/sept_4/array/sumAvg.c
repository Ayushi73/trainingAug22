// Write a program to calculate the sum and average of elements in an array.

#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main()
{

int arr[MAX];

printf("\nEnter %d numbers: \n", MAX);

for(int i=0 ; i<MAX ; i++)
	{
		scanf("%d", &arr[i]);
	}


int sum = 0;// sum of all elements in the array

for(int i=0; i<MAX ; i++)
{
	sum = sum + arr[i];
}	

int avg;
avg = sum/MAX;

printf("\nSum of all elements of the array is %d.\nAverage of all numbers of the array is %d.\n", sum, avg);

return EXIT_SUCCESS;
}
