// Write a program to find the transpose of a given 2D array (matrix).
#include <stdio.h>
#define MAX 2
int main() {
    
    int arr[MAX][MAX];//2D array
    
    printf("Enter upto 4 elements of the matrix\n");
    
    // input elements into the matrix
    for(int i = 0 ; i <MAX ; i++)
    {
        for(int j = 0 ; j <MAX ; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    //print the matrix
    printf("\nYour matrix is : \n");
    for(int i = 0 ; i <MAX ; i++)
    {
        for(int j = 0 ; j <MAX ; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
       
    //printing transpose of the matrix
    printf("\nYour transpose matrix is : \n");    
    for(int i = 0 ; i <MAX ; i++)
    {
        for(int j = 0 ; j <MAX ; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }    
        


    return 0;
}
