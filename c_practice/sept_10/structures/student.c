/* Practice Questions on Structures
1. Write a program to define a structure called Student with members: name, age, and grade. Create an instance of this structure and take input from the user for each member, then print the values.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

struct Student
{
  char name[MAX];
  int age;
  char grade;
};
typedef struct Student STUDENT_INFO;

int main() {
    STUDENT_INFO s;
    
    printf("\nEnter name of the student: ");
    if(fgets(s.name, MAX, stdin)!=NULL)
        {
            int len;
            len=strlen(s.name);
            if(s.name[len-1]=='\n'){
                s.name[len-1]='\0';
            }
           
        }
    
    
    printf("\nEnter age of the student: ");
    scanf("%d", &s.age);
    
    printf("\nEnter grade of the student: ");
    scanf(" %c", &s.grade);
    
    printf("\n\n**********************STUDENT INFORMATION**********************\n");
    
    printf("\nName  : ");
            if(!fputs(s.name, stdout)){
                printf("Error in fputs.");
                return 2;
            }
        
    printf("\nAge   : %d\n", s.age);
    printf("Grade : %c\n\n", s.grade);

    return 0;
}
