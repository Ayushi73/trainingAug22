// Write a program to find the maximum and minimum elements in an array of integers.

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



int max_num=0; //largest number in the array
int min_num=arr[0]; //smallest number in the array

for(int i=0; i<MAX ; i++)
{
	if(arr[i]>=max_num){
	max_num = arr[i];
	}
}	


for(int i = 0 ; i < MAX ; i++)
{
	if(arr[i]<=min_num){
	min_num = arr[i];
	}
	
}

printf("\n Maximum number: %d\n Minimum number: %d\n", max_num, min_num);	

return EXIT_SUCCESS;
}
