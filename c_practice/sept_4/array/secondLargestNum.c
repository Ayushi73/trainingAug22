//Write a program to find the second largest element in an array.

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
    printf("\nYour input array is : \n");
    for(int i=0; i<MAX; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n\n");
    
    //check for duplicates
    for(int i=0; i<MAX; i++)
    { 
        
        for(int j=1+i; j<MAX ; j++)
        {
            
            if(arr[i]==arr[j])
            {
                arr[j]=0;
            }
            
    }
    
    }
    printf("\n");
    printf("Duplicates set to zero\n");
    for(int j=0; j<MAX ; j++)
        {
            
            printf("%d ", arr[j]);
            
            
        }
            printf("\n");

    //bubble sort
    for(int j=0; j<MAX ; j++)
        {
            for(int i=1+j; i<MAX ; i++)
        {
           if(arr[j]<arr[i])
            {   
                //swap
                int temp;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }

        }
    //printing sorted array
    printf("\nSorted array in descending order: \n");
    for(int i=0; i<MAX ; i++)
        {
           printf("%d ", arr[i]);
        }
      printf("\n");
      
      printf("\nSecond largest element of the array is: %d\n\n", arr[1]);
	 	
   
    return EXIT_SUCCESS;
}

