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
  int l=INT_MIN;
  int sl=INT_MIN;
  //to find the largest element
  for(int i=0;i<size;i++)
   if(arr[i]>l)
    l=arr[i];
  //to find the 2nd largest element
  for(int i=0;i<size;i++)
   if(arr[i]>sl && arr[i]<l)
    sl=arr[i];
  //to display the result
  printf("The second largest number is %d", sl);
}
