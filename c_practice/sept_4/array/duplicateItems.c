//Write a program to remove duplicate elements from an array.

#include<stdio.h>
#include<stdlib.h>
#define MAX 7
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
    printf("\nYour input array is : \n");
    for(int i=0; i<MAX; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n\n");
    
    //check for duplicates
    for(int i=0; i<MAX; i++)
    { int ctr=1;
    
    if(freq[i]!=0){
        
        for(int j=0; j<MAX ; j++)
        {
            
            if(arr[i]==arr[j])
            {
                ctr++;
                freq[j]=0;
            }
            
            freq[i]=ctr;
        }
        
    
    
    }
    }
    
    printf("\nArray with duplicate elements removed: \n");
    for(int i=0; i<MAX; i++)
    {
        if(freq[i]!=0)
            {
                printf("%d ", arr[i]);
                
            }
    }
   printf("\n\n");

    return EXIT_SUCCESS;
}


