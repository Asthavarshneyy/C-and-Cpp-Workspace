#include <stdio.h>
void main()
{
  printf("*******************\n");
  printf("4th program:Sorting an array\n");
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
    printf("The original list was:");
    for(int i=1;i<=size;i++)
       printf("%d  ",arr[i]);
    int lim=size;
    for(int i=lim;i>0;i--)
    {
      for(int j=1;j<i;j++)
      {
        if(arr[j]>arr[j+1])
        {
          int temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
        }
      }
    }
    printf("\nThe sorted list of numbers is :");
    for(int i=1;i<=size;i++)
       printf("%d  ",arr[i]);
  }
  printf("\n*******************\n");
  printf("END OF PROGRAM\n");
  printf("*******************\n");
}