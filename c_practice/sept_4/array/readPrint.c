/*Write a program to read and print array elements( using index and using address) */

#include<stdio.h>
#include<stdlib.h>
# define MAX 10
int main(){

int arr[MAX];

//first array
printf("\n Enter 10 numbers for 1st array: \n");
for(int i=0; i<MAX; i++){
	scanf("%d", &arr[i]);
}
printf("\nYour first array is :\t");

for(int i=0; i<MAX; i++){
	printf("%d  ", arr[i]);
}

//second array
printf("\nEnter 10 numbers for 2nd array: \n");
for(int i=0; i<MAX; i++){
	scanf("%d", arr+i);
}
printf("\nYour second array is :\t");

for(int i=0; i<MAX; i++){
	printf("%d  ", arr[i]);
}

printf("\n");
return EXIT_SUCCESS;
}
