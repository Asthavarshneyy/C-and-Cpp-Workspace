#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Enter the number of rows of the array: ");
  int rows;
  scanf("%d", &rows);
  printf("Ebter the number of columns of the aray: ");
  int cols;
  scanf("%d", &cols);
  int arr[rows][cols];
  //input
  for(int i=0;i<rows;i++)
  {
    printf("Enter the elements in row %d\n", i);
    for(int j=0;j<cols;j++)
    {
      scanf("%d", arr[i][j]);
    }
  }
  int l=INT_MIN;
  int i=-1;
  //to find the smallest element
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
      if(arr[rows][cols]>l)
      {
        i=cols;
        l=arr[rows][cols];
      }
    }
  }
  //to display the result
  printf("The largest number is %d and it's column index is %d", l, i);
}
