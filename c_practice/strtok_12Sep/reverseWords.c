/*4. Write a program that reverses each individual word in a pipe-separated string while keeping
the original order of words. For example, the input apple|banana|grape should return
elppa|ananab|eparg.*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

void revtok(char * arr){
    
    int len=strlen(arr);
    char revar[len];
    revar[len]='\0';
    
    for(int i=0; i<len ; i++){
        
        revar[len-1-i]=arr[i];
    }
    
    printf("%s", revar);
}

int main()
{
	char str[MAX];
	char tmp[MAX];
	int len;

	printf("Enetr pipe seperated words: ");
	if(fgets(str, MAX, stdin)!=NULL) {
		len = strlen(str);
		if(str[len-1]=='\n') {
			str[len-1]='\0';
		}

		//fputs(str, stdout);
	}
	len = strlen(str);

	memset(tmp, 0, MAX);
	strncpy(tmp, str, len);
	tmp[len]='\0';

//	fputs(tmp, stdout);

	int ctr=0;//count the number of tokens
	char * tok;
	tok=strtok(tmp, "|");
	while(tok!=NULL) {

		ctr++;
		tok=strtok(NULL, "|");
	}

	char * arr[ctr];
	for(int i=0; i<ctr; i++) {

		arr[i]=(char*)malloc(MAX*sizeof(char));
	}


	//reset tmp
	memset(tmp, 0, MAX);
	strncpy(tmp, str, len);
	tmp[len]='\0';

	int k=0;
	char * token;
	token=strtok(tmp, "|");
	while(token!=NULL) {

		arr[k++]=token;
		token=strtok(NULL, "|");
	}

	// printf("arr: \n");
	// for(int i=0; i<ctr ; i++){
	//     printf(" ");
	// fputs(arr[i], stdout);
	// }
 
    
    //reverse each token
	for(int i=0; i<ctr ; i++)
	{
	    if(i!=0)
	    {
	        printf("|");
	    }
	    revtok(arr[i]);
	    
		
	}

	printf("\n\n");

		return 0;
	}


