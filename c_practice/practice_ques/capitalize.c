//input sentence and capitalize last letter in each word. 
#include <stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 50

int main()
{   
    char str[MAX];
    int len;
    printf("Enter a sentence: ");
    
    if(fgets(str, MAX, stdin)!=NULL)
        {
            len=strlen(str);
            if(str[len-1]=='\n')
            {
                str[len-1]='\0';
            }
            printf("\nThe input string is : ");
            if(!fputs(str, stdout))
            {
                printf("Error in fputs.");
                return 1;
            }
        }
        
        //printf("\nString len %ld", strlen(str));

for(int i=0; i<strlen(str); i++)
{
  if(str[i]==' ' || str[i]=='\0' )
  {
      str[i-1]=toupper(str[i-1]);
  }
  
}
str[len-2]=toupper(str[len-2]);

printf("\n\nString with last letter of every word capitalized: %s\n\n", str);

    return 0;
}

