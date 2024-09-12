
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main(){

int arr[MAX];

printf("\nEnter %d integers : \n", MAX);

// input the array elements
for(int i=0 ; i < MAX ; i++)
	{
	scanf("%d", &arr[i]);
	}

printf("\nYour array is : ");

for(int i=0 ; i < MAX ; i++)
	{
	printf("%d ", arr[i]);
	}

int arr_rev[MAX];//initialize reversed array

for(int i = 0 ; i < MAX ; i++)
	{
		arr_rev[MAX-1-i]=arr[i];	
	}


printf("\nReversed array: ");

for(int i=0 ; i < MAX ; i++)
	{
	printf("%d ", arr_rev[i]);
	}

int ctr=0;
for(int i = 0; i<MAX ; i++)
	{
	if(arr[i] == arr_rev[i])
		{
		ctr++;
		}

	else
	{
	ctr=0;
	}
	}

if(ctr!=0){
	
	printf("\nStatus: Palindrome\n");}

else{
printf("\nStatus: Not a palindrome.\n");}

return  EXIT_SUCCESS;
}
