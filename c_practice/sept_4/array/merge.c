//Write a program to merge two arrays into a single array.

#include<stdio.h>
#include<stdlib.h>
#define MAX 5
//# define MAX_2 10
int main(){

int arr_1[MAX];
int arr_2[MAX];

printf("\nEnter %d integers of the first array : \n", MAX);

// input the array elements
for(int i=0 ; i < MAX ; i++)
	{
	scanf("%d", &arr_1[i]);
	}

//printing the first array
printf("\nFirst array: ");
for(int i=0 ; i < MAX ; i++)
	{
	printf("%d ", arr_1[i]);
	}


printf("\nEnter %d integers of the second array : \n", MAX);

// input the array elements
for(int i=0 ; i < MAX ; i++)
	{
	scanf("%d", &arr_2[i]);
	}

//printing the first array
printf("\nSecond array: ");
for(int i=0 ; i < MAX ; i++)
	{
	printf("%d ", arr_2[i]);
	}

//merge the two arrays
int m = MAX + MAX;
int merged_arr[m];

for(int i = 0; i < MAX ; i++)
	{
	merged_arr[i]=arr_1[i];
	}

for(int i = 0; i < MAX ; i++)
	{
	merged_arr[MAX+i] = arr_2[i];
	}

//print the merged array
printf("\n\nMerged array : ");
for(int i=0 ; i < m ; i++)
	{
	printf("%d ", merged_arr[i]);
	}

printf("\n\n");
return EXIT_SUCCESS;
}
