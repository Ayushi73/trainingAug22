//Q2. Input n from user. Take n lines of input. then input a character, input a string(1 word). Search the character and the word in each line. Print the position and sum of position for each line.
 
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAX 100
 
int main()
{   int n;
   
    printf("\nEnter the number of lines : \n");
    scanf("%d",&n );
    getchar();//Consume newline character left by scanf
    
    char *lines[n]; 
    
     for(int i=0; i<n; i++)
    
        {   //scanf("%s", &str[i]);
            lines[i]=(char *)malloc(MAX*sizeof(char));
            
        }
        
        printf("\nEnter %d lines : \n", n);
        for(int i=0; i<n; i++)
        {   
             
            if(fgets(lines[i], MAX, stdin)!=NULL)
            {
                int len;
                len=strlen(lines[i]);
                if(lines[i][len-1]=='\n')
                {
                lines[i][len-1]='\0';
                }
           
        }
        }
    

        printf("\n\nThe input array is : ");
        printf("\n");
        for(int j=0; j<n; j++)
        {printf("\n");
            if(!fputs(lines[j], stdout)){
                printf("Error in fputs.");
                return 2;
                
            }
            
        }
        
        char ch;
        printf("\n\nEnter the character to be searched for : ");
        scanf("%c", &ch);
        
        char substr[MAX];
        printf("\n\nEnter the sub-string to be searched for : ");
        scanf("%s", &substr);
       // printf("\n\nSubstring : %s ", substr);
        
        for(int i=0; i<n; i++)
        {
            
            int freq=0, pos=0;
            for(int j=0; j<strlen(lines[i]); j++)
                {   
                  //freq=0;
                  if(lines[i][j]==ch)
                    { printf("\nIn line %d, character found at position %d ", i, j);
                       freq++;
                       pos=pos+j;
                    }
                    
                    
                
                }
                if(pos!=0)
                        {
                         printf("\nIn line %d, sum of positions : %d.",i, pos);
                         printf("\n");
                        }
                
                if(pos==0 && freq==0)
                        {
                         printf("\nIn line %d, character is not found.\n", i);
                         printf("\n");
                        }
                
                
                
        
        }
        
        
        
        
        
     
     
    return 0;
}
