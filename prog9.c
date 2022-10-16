#include <stdio.h>
void main()
{
  printf("*******************\n");
  printf("9th program:Largest number\n");
  printf("Coder:Astha Varshney\n");
  printf("*******************\n");
  int size=0;
  printf("Mention the size of your list\n");
  scanf("%d", &size);
  if(size<0)
  {
    printf("That size is not possible\n");
  }
  else
  {
    int arr[size];
    int i=1;
    while(i<=size)
    {
      int num;
      printf("Enter any number\n");
      scanf("%d",&num);
      arr[i]=num;
      i++;
    }
    int num=arr[1];
    i=1;
    while(i<=size)
    {
      if(arr[i]>num)
        num=arr[i];
      i++;  
    }
    printf("the largest number in the entire array is %d",num);
  }
  printf("\n*******************\n");
  printf("END OF PROGRAM\n");
  printf("*******************\n");
}