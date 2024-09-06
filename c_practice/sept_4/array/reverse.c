
//Write a program to reverse the elements of an array

#include<stdio.h>
 #include<stdlib.h>
 #define MAX 10
 
  int arr[MAX];
 
  int main()
  {
 
  printf("\nEnter %d numbers: \n", MAX);
 
 // input the array
  for(int i=0 ; i<MAX ; i++)
      {
          scanf("%d", &arr[i]);
      }
 
  printf("Your array is : \n");
 
  //print the array
  for(int i=0 ; i<MAX ; i++)
      {
          printf("%d\t", arr[i]);
      }
  // reverse the array
 
  int rev_array[MAX];
  for(int i=0 ; i < MAX ; i++)
      {
          rev_array[i]=arr[MAX-i-1];
      }
 
  // print the reversed array
  printf("\nYour reversed array is :\n");
  for(int i = 0 ; i < MAX ; i++)
      {
      printf("%d\t", rev_array[i]);
      }
 
  printf("\n\n");
  return EXIT_SUCCESS;
  }

