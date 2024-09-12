//WAP to get the position of a substring in a string.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

int main()
{   char str[MAX], sub_str[MAX];
    int len;
    int sub_len;
    
    printf("\nEnter the string    : ");
    
    if(fgets(str, MAX, stdin)!=NULL)
        {
           
            len=strlen(str);
            if(str[len-1]=='\n'){
                str[len-1]='\0';
            }
           
            printf("\nThe input string is : ");
            if(!fputs(str, stdout)){
                printf("Error in fputs.");
                return 2;
            }
            
            
        }
    
    printf("\n\nEnter the sub-string: ");
         if(fgets(sub_str, MAX, stdin)!=NULL)
        {
            
            sub_len=strlen(sub_str);
            if(sub_str[sub_len-1]=='\n'){
                sub_str[sub_len-1]='\0';
            }
            
            printf("\nThe sub-string is   : ");
            if(!fputs(sub_str, stdout)){
                printf("Error in fputs.");
                return 2;
            }
            
        char *ptr=strstr(str, sub_str);
        if(ptr!=NULL){
           printf("\n\nSub-string found at position %ld\n\n", ptr-str+1);
        }
        else{
            printf("\nSub-string not found.\n");
        }
            return 0;
        }
        
    return EXIT_SUCCESS;
}

