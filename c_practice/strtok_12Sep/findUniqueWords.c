/*
2. Write a program that Finds the unique words from a pipe-separated string.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

int main()
{   
    char str[MAX];      //input string str
    char tmp[MAX];      //temp string to copy str
    int len;            //to store length of str
    
    
    printf("Enter string with pipe separated words: \n");
    if(fgets(str, MAX, stdin)!=NULL){
        len=strlen(str);
        if (str[len-1]=='\n'){
            str[len-1]='\0';
        }
        
       // fputs(str, stdout); // str input successful
        
    }
    
    len=strlen(str);        //updated the value of len
    
    //copy str to tmp
    memset(tmp, 0, MAX);
    strncpy(tmp, str, len);
    
    char * token;
    int ctr=0; //counter to find the number of tokens in tmp
    token=strtok(tmp, "|");
    
    while(token!=NULL){
        
        ctr++;
        token=strtok(NULL, "|");
        
    }
    
   // printf("No. of Tokens :%d", ctr);     //token count working fine
   
   // create array of ctr number of strings to store each token
   char * arr[ctr];
   
   //dma for each string in the array
   for(int i=0; i<ctr ; i++){
       
       arr[i]=(char * )malloc(MAX * sizeof(char));
       
   }
   
   
   //reset tmp string because tokenizing changes the string
   memset(tmp, 0, MAX);
   strcpy(tmp, str);
   tmp[len]='\0';
   
   //perform tokenization and store each token in array
   char * tok;
   int k=0;
   tok=strtok(tmp, "|");
   while(tok!=NULL){
       
       arr[k]=tok;
       tok=strtok(NULL, "|");
       k++;
       
   }
   arr[k]='\0';
   
  // printf("printing array of tokens: ");
  // for(int i=0; i<ctr ; i++){                 // array of tokens succesfully implemented
  //     printf("%s ", arr[i]);
  // }
   
   
  //comparing elements to find unique elements
  
  //define a freq array of size ctr and store freq of each unique token
  int freq[ctr];
  
  for(int i=0; i<ctr; i++)
  {
      freq[i]=1;
      //printf("Freq[%d]=%d \n", i, freq[i]);
  }
  
 
  for(int i = 0 ; i < ctr - 1 ; i++)
  {
      if(freq[i]!=0)
      {
          for (int j = i + 1 ; j < ctr ; j++)
          {
              if(strcmp(arr[i],arr[j])==0)      //always use strcmp to compare strings
              {
                  freq[i]=0;
                  freq[j]=0;
                  
              }
          }
      
      }
      
  }
  
 // for(int i=0; i<ctr; i++)
 // {
 //    // freq[i]=1;
 //     printf("Freq[%d]=%d \n", i, freq[i]);
 // }
  
  //print unique words
  int num=0;
  printf("\nString of unique words: \n");
  for(int i = 0 ; i < ctr  ; i++)
  {
      if(freq[i]!=0){
          
          if(num!=0){
              printf("|");
          }
          
          printf("%s", arr[i]);
          
          num++;
          
      }
      
      
      
  }
printf("\n\n"); 
    return 0;
}
