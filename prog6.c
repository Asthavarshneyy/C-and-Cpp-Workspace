#include <stdio.h>
void main()
{
  printf("*******************\n");
  printf("6th program:Binary Search\n");
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
    printf("Enter the number whose presence you want to check in the list\n");
    int num;
    scanf("%d", &num);
    int ans=-1;
    for(i=1;i<size;i++)
    {
      if(num==arr[i])
      {
        ans=i;
        break;
      }
    }
    if(ans==-1)
    printf("The entered number is not a part of the previously given list");
    else
    {
      printf("The number %d is present on the %d position of the list.",num,ans);
    }
  }
  printf("\n*******************\n");
  printf("END OF PROGRAM\n");
  printf("*******************\n");
}