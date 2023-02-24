#include <stdio.h>
#include <stdlib.h>

int Count(int N)
{
  static int count=0;
  if(N>0)
  {
    count++;
    Count(N/10);
  }
  else
   return count;
}
int main()
{
	printf("Enter any number: ");
  int N;
  scanf("%d", &N);
  //to compute the number of digits
  int count=Count(N);
  //to display the result
  printf("The number of digits in number %d is %d", N,count);
}