//2. program to find largest of three numbers


#include<stdio.h>
#include<stdlib.h>

int main(){
int a,b,c;

printf("\nEnter three numbers: \t");
scanf("%d %d %d", &a, &b, &c);

if(a>b && a>c){

		printf("The greatest number is %d\n",a );
		
	}

	else if(b>a && b>c){
		printf("The greatest number is %d\n",b );
		}

	else{

	printf("The greatest number is %d\n", c);
	}



return EXIT_SUCCESS;}
