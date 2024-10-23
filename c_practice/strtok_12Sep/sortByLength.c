/**3. Write a program that sorts the words by their length in ascending order in a
pipe-separated string.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50


int main()
{	char str[MAX];
	char tmp[MAX];
	int len;
	memset(str, 0, MAX);

	printf("Enter pipe separated string: ");
	if(fgets(str, MAX, stdin)!=NULL) {
		len=strlen(str);
		if(str[len-1]=='\n') {
			str[len-1]='\0';
		}
		//fputs(str, stdout);
	}
	len=strlen(str);

	memset(tmp, 0, MAX);
	strncpy(tmp, str, len);
	tmp[len]='\0';

	int ctr=0;
	char * tok;

	tok=strtok(tmp, "|");
	while(tok!=NULL) {

		ctr++;
		tok=strtok(NULL, "|");
	}

//printf("\nTokens : %d", ctr);

	char * arr[ctr];
	for(int i=0; i<ctr ; i++) {

		arr[i]=(char*)malloc(MAX*sizeof(char));
	}
//reset tmp
	memset(tmp, 0, MAX);
	strncpy(tmp, str, len);

//	store each token in arr
	char * token;
	int k=0;
	token=strtok(tmp, "|");
	while(token!=NULL) {
		strcpy(arr[k],token);
		token=strtok(NULL, "|");
		k++;
	}


//for(int i=0; i<ctr ; i++){
//
//    fputs(arr[i], stdout);
//    printf(" ");
//}

	int max_len; //max length of token
	max_len=strlen(arr[0]);
	for(int i=1; i<ctr ; i++) {

		if(strlen(arr[i])>max_len) {
			max_len=strlen(arr[i]);
		}


	}


	char * order[ctr]; // array that stores tokens in asc order of their length
	for(int i=0; i<ctr; i++) {

		order[i]=(char *)malloc(MAX * sizeof(char));

	}


	int j=0;
	for(int toklen=0; toklen<=max_len; toklen++)
	{
		for(int i=0; i<ctr ; i++)
		{

			if(strlen(arr[i])==toklen)
			{
				order[j]=arr[i];
				j++;
			}

		}
	}



	printf("\n\nString sorted in acsending order of length of the words : \n");
	for(int i=0; i<ctr; i++) 
	{   
	    if(i!=0)
	    {
	        printf("|");
	    }
	    
		printf("%s",order[i]);

	}

printf("\n\n");

	return 0;
}

