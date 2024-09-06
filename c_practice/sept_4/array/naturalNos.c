//Write a program to initialize an array with the first 10 natural numbers and print the elements.

#include<stdio.h>
#include<stdlib.h>
# define MAX 10

int main(){
int arr[MAX];// integer array of size=MAX
int num = 1;


for(int i=0; i<MAX; i++)
	{

	arr[i] = num;

	num++;

	}	

printf("\nArray with first %d natural numbers :\t", MAX);

for(int i=0 ; i<MAX ; i++)
	{
	printf("%d ", arr[i]);
	}


printf("\n\n");

return 0;
}
















