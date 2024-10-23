//Q3. input an array with n elements from 1 to n. find the missing element.
 
#include<stdio.h>
#include<stdlib.h>
//#define MAX 10
 
int main()
{   int n;
 
     printf("\nEnter the number of elements in the array: \n");
     scanf("%d",&n );
     int arr[n];
     printf("\nEnter numbers from 1 to %d : \n", n);
     for(int i= 0; i<n ; i++)
        {
                 scanf("%d",&arr[i] );
        }
        //printing the array
        printf("\nYour array is: \n");
        for(int i= 0; i<n ; i++)
        {
                 printf("%d ", arr[i] );
        }
        //bubble sort the array
        for(int i= 0; i<n-1 ; i++)
        {
                for(int j=i+1; j<n ; j++)
                    {
                        if(arr[i]>arr[j])
                                {//swap
                                    int tmp=0;
                                    tmp=arr[i];
                                    arr[i]=arr[j];
                                    arr[j]=tmp;
                                }
                    }        
        }
        //print sorted array
        printf("\nSorted array :\n");
        for(int i =0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
    int ctr=0; 
    int index;
    for(int i=0; i<n; i++)
        {
            if(arr[i]!=i+1){
                ctr++;
                if(ctr==1){
                    index=i;
                }
            }
        }
    // printf("\n%d\n", ctr);
    if(ctr!=1)
        {
        printf("\nMissing element is %d\n", n);
        }
    if(ctr==1)
        {
        printf("\n\nMissing element is %d\n", index+1);
        }

        printf("\n\n");
/*   printf("\n\n");
    scanf("%d", ); */
    return 0;
}
