#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Enter the size of the array: ");
  int size;
  scanf("%d", &size);
  int arr[size];
  printf("Enter the numbers: \n");
  for(int i=0;i<size;i++)
   scanf("%d", &arr[i]);
  int s=INT_MAX;
  //to find the smallest element
  for(int i=0;i<size;i++)
   if(arr[i]<s)
    s=arr[i];
  //to display the result
  printf("The smallest number is %d", s);
}
