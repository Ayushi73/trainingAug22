/*8. Write a C program that reads a character from the user and checks whether it is a vowel (a, e, i, o, u) or a consonant using a switch statement.*/


#include<stdio.h>
#include<stdlib.h>

int main(){
char ch;


printf("\nEnter a character\t");
scanf(" %c", &ch);

switch(ch){
	case 'a': 
		printf("\nIt is a vowel.\n");
		break;

	case 'e': 
		printf("\nIt is a vowel.\n");
		break;

	case 'i': 
		printf("\nIt is a vowel.\n");
		break;

	case 'o': 
		printf("\nIt is a vowel.\n");
		break;

	case 'u': 
		printf("\nIt is a vowel.\n");
		break;
default: 
		printf("\nIt is a consonent.\n");

}

return EXIT_SUCCESS;
}
