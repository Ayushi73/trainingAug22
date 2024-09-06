//Write a program to sort an array of integers in ascending order.

#include<stdio.h>
#include<stdlib.h>
# define MAX 10

int main(){
int arr[MAX];

printf("\nEnter %d numbers : \n", MAX);

// input the array
for(int i =0 ; i < MAX ; i++)
	{
	scanf("%d",	&arr[i]);
	}

// print the array
printf("\nYour array is : \n");

for(int i =0 ; i < MAX ; i++)
	{
	printf("%d ", arr[i]);
	}

//int tmp=0;
// Bubble sort 
for(int i = 0 ; i < MAX-1 ; i++)
	{

	for(int j=0; j<MAX ; j++)
		{
			if(arr[j]<arr[j+1])
			{
				int tmp=0;
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}

	
	}
//printing the sorted array
printf("\nYour sorted array is : \n");
for(int i = 0 ; i < MAX ; i++)
	{
	printf("%d ", arr[i]);
	}
printf("\n\n");
return EXIT_SUCCESS;
}
