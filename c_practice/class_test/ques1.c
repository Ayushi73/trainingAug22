//Ques 1. Input two arrays. After inputting merge them. Remove even nos in merged array. Sort and print.
#include <stdio.h>
int main() {
    int n1, n2;
    printf("\nEnter the number of elements in first array: \n");
    scanf("%d", &n1);
    int arr_1[n1];
    printf("\nEnter the elements of first array :\n");
    for(int i=0; i<n1; i++)
        {
            scanf("%d", &arr_1[i]);
        }
    printf("\nEnter the number of elements in second array: \n");
    scanf("%d", &n2);
    int arr_2[n2];
    printf("\nEnter the elements of second array :\n");
    for(int i=0; i<n2; i++)
        {
            scanf("%d", &arr_2[i]);
        }
 
        //printing array 1
        printf("\nFirst array: \n");
        for(int i=0; i<n1; i++)
        {
            printf("%d ", arr_1[i]);
        }
        printf("\n\n");
 
        //printing array 2
        printf("\nSecond array: \n");
        for(int i=0; i<n2; i++)
        {
            printf("%d ", arr_2[i]);
        }
        printf("\n\n");
        int m=n1+n2;
        int merged[m];
        for(int i=0; i<n1; i++)
            {
                merged[i]=arr_1[i];
            }
        for(int i=0; i<n2; i++)
            {
                merged[n1+i]=arr_2[i];
            }
        int ctr=0;    
        printf("Merged array: ");    
        for(int i=0; i<m; i++)
            {
                printf("%d ", merged[i]);
                if(merged[i]%2==0){
                    ctr++;
                    merged[i]=0;
                }
            }  
           int o;
        o=m-ctr; //no. of odd elements in merged array
        //printf("\n%d\n", o);
        int odd[o];
        int j=0;
        for(int i=0; i<m; i++)
        {
            if(merged[i]!=0){
                odd[j]=merged[i];
                j++;
            }
        }
        printf("\n\nodd only array : \n");
        for(int i=0; i<o; i++)
        {
            printf("%d ", odd[i]);
        }
        //bubble sort odd_array
        for(int i=0; i<o-1; i++)
        {
            for(int k=0; k<o; k++){
                if(odd[i]>odd[i+1])
                {//swap
                int tmp;
                tmp=odd[i];
                odd[i]=odd[i+1];
                odd[i+1]=tmp;
                }
            }
        }
 
        printf("\n\nSorted array: \n");
        for(int a=0; a<o; a++){
            printf("%d ", odd[a]);
        }
printf("\n\n"); 
 return  0;

}
