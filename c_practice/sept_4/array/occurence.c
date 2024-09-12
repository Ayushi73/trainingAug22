//Write a program to count the occurrences of each element in an array.

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main()
{
    int arr[MAX], freq[MAX];
    printf("Enter %d elements of the array\n", MAX);
    
    //input the elements
    for(int i=0; i<MAX; i++)
    {
        scanf("%d", &arr[i]);
        freq[i]=-1;
    }
    
    //printing the array
    printf("Your input array is : \n");
    for(int i=0; i<MAX; i++)
    {
        printf("%d ", arr[i]);
    }

	printf("\n");
    
    //printing the frequency array
//    printf("\nYour frequency array is : \n");
  //  for(int i=0; i<MAX; i++)
    //{
      //  printf("%d ", freq[i]);
   // }
    
    printf("\n");
    
    //check occurence
    for(int i=0; i<MAX; i++)
    {
        int ctr=0;
        if(freq[i]==-1)
        {
            for(int j=0; j<MAX; j++)
            {
                if(arr[i]==arr[j]){
                ctr++;
                freq[j]=0;
                }
            }
            freq[i]=ctr;
        }
    }
    
    //printing the array
    //printf("Your input array is : \n")
    for(int i=0; i<MAX; i++)
    {
        if(freq[i]!=0)
        {   if(freq[i]!=1){
            printf("%d appears %d times\n", arr[i], freq[i]);
        }
        
        else if(freq[i]==1){
            printf("%d appears only once\n", arr[i]);
        }
        }
    }
   printf("\n"); 
    return EXIT_SUCCESS;
}

