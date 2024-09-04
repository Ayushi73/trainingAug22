/*3. Write a program that takes a score (0-100) as input from the user and uses if statements to determine the corresponding grade:
90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F
Print the grade.
*/


#include<stdio.h>
#include<stdlib.h>

int main(){
int score;
printf("Enter your score: \t");
scanf("%d", &score);

if(score>=90 && score<=100){
		printf("\n\tYour grade is A\n");
}

else if(score>=80 && score<=89){
		
		printf("\n\tYour grade is B\n");
}

else if(score>=70 && score<=79){
		
		printf("\n\tYour grade is C\n");
}

else if(score>=60 && score>=69){
		
		printf("\n\tYour grade is D\n");
}

else if(score<60){
		
		printf("\n\tYour grade is F\n");
}

else{
printf("\n***Invalid score. Try again.***\n");
}



//printf("");
//scanf("");

return EXIT_SUCCESS;
}
