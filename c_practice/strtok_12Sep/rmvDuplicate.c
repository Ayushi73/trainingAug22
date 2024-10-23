/*

1. Write a program that removes duplicate words from a pipe-separated string.
For example, the input apple|orange|banana|apple|grape should return apple|orange|banana|grape.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

int main()
{   
    char str[MAX];          //create string str
    int len;
    
    memset(str, 0, MAX);    //initialize all values of str to 0

    printf("Enter your string: ");
    if(fgets(str, MAX, stdin)!=NULL)
    {
        len=strlen(str);
        if(str[len-1]=='\n'){
            str[len-1]='\0';
        }
        
       // fputs(str, stdout); to test that str is taken as input properly
    }
    len=strlen(str);
    
    char tmp[MAX];          //create string tmp
    memset(tmp, 0, MAX);    //initialize all values of tmp to 0

    strncpy(tmp, str, len); //copy the contents of str to tmp
    
    int ctr=0;              //counter to check the total number of tokens
    char * token;           //token variable for strtok

    token=strtok(tmp, "|");
    while(token!=NULL){
        
        ctr++;
        //puts(token);
        token=strtok(NULL, "|"); //set the delimeter to null
        
    }
    
   // printf("\nNo of tokens: %d", ctr);
   
   char * tokarray[ctr];
   strncpy(tmp, str, len);
   char * tok;
   
   for(int i=0; i<ctr; i++){
       
       tokarray[i]=(char *)malloc(MAX*sizeof(char));
   }
   
   
   
   int k=0;
   
   tok=strtok(tmp, "|");
    while(tok!=NULL){
        
        tokarray[k]=tok;
        tok=strtok(NULL, "|"); //set the delimeter to null
        k++;
        
    }
    tokarray[k]='\0';
   
  // printf("Tok array : \n");  --> tokarray is proper
  // for(int i=0; i<ctr; i++){
  // puts(tokarray[i]);
  // printf("\n");
  // }

int freq[ctr];

for(int i=0 ; i<ctr; i++)
{
    freq[i]=1;
}

for(int i=0; i<ctr-1; i++)
{
    
    if(freq[i]!=0)
    {
        for(int j=i+1; j<ctr; j++)
        {
            
            if(strcmp(tokarray[j],tokarray[i])==0){
                freq[i]=1+freq[i];
                freq[j]=0;
            }
            
        }
    }
}

//print output string
printf("Removing duplicate words:\n");
//printf("Freq array: ");
for(int i=0; i<ctr; i++){
   
    if(freq[i]!=0){
        
        if(i!=0){
            printf("|");
        }
        printf("%s", tokarray[i]);
    
        
        
    }
    //printf("%d ", freq[i]);
    
}

printf("\n\n");

    return 0;
}

