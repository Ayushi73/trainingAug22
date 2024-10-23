/*5. Write a program that splits a pipe-separated string into words and reverses the order
of the words. For example, the input apple|banana|grape|orange should return
orange|grape|banana|apple.*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

int main() {

	char str[MAX];
	char tmp[MAX];
	int len;

	printf("\n\nEnter pipe separated words : ");
	if(fgets(str, MAX, stdin)!=NULL) {
		len=strlen(str);
		if(str[len-1]=='\n') {
			str[len-1]='\0';
		}
	}
	//fputs(str, stdout);
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

	//printf("No of tokens: %d", ctr);


	char * arr[ctr];
	for(int i=0; i< ctr ; i++) {

		arr[i]=(char *)malloc(MAX * sizeof(char));

	}

	//reset tmp
	memset(tmp, 0, MAX);
	strncpy(tmp, str, len);
	tmp[len]='\0';

	int j=0;
	char * token;
	token=strtok(tmp, "|");
	while(token!=NULL) {

		arr[j++]=token;
		token=strtok(NULL, "|");
	}
	arr[j]='\0';

	printf("Reversed order of words    : ");
	for(int i=ctr-1; i>=0; i--) {

		if(i!=ctr-1)
		{
			printf("|");
		}
		printf("%s", arr[i]);
	}

	printf("\n\n");

	return 0;
}
