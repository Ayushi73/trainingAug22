//Write a program to search for a specific element in an array and print its index if found.


#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main(){
int arr[MAX];

printf("\nEnter %d numbers: \n", MAX);

//input the array
for(int i = 0 ; i < MAX ; i++)
	{
		scanf("%d", &arr[i]);	
	}

int num;
printf("\nEnter the element to be found : \n");
scanf("%d", &num);

//finding the element in the array
for(int i = 0 ; i < MAX ; i++)
	{
		if(arr[i]==num)
		{
		printf("\nThe number %d is present at index %d and position %d.\n",num , i , i+1);
		}

	//	else
	//	{
	//		printf("\n%d is not present in the array.\n", num);
	//	}
	}
		
		
	printf("\n%d is not present in the array.\n", num);
	

return EXIT_SUCCESS;
}
