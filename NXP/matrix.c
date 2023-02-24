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
      scanf("%d", &arr[i][j]);
    }
  }
  //to display the result
  printf("Element at the top left corner is %d \n",arr[0][0]);
  printf("Element at the top right corner is %d \n",arr[0][cols-1]);
  printf("Element at the bottom left corner is %d \n",arr[rows-1][0]);
  printf("Element at the bottom right corner is %d \n",arr[rows-1][cols-1]);
}
