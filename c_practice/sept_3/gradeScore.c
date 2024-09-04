/*. Implement a small C program that performs the following tasks:
	Read an integer representing the student score.
	Read a character representing the Student Grade (A, B, C, D, or F).
	Print Your score is 90 and Grade is A.
 */

#include<stdio.h>
#include<stdlib.h>

int main(){

int score;
char grade;

printf("\n\nEnter your score(0-100) and grade(A-E): ");
scanf("%d %c", &score, &grade);

printf("Your score is : %d\nYour grade is : %c\n", score, grade);

return EXIT_SUCCESS;
}
