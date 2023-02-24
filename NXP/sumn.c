#include <stdio.h>
#include <stdlib.h>

int Sum(N)
{
  if(N!=0)
   return N+Sum(N-1);
  else
   return N;
}
int main()
{
	printf("Enter the value of N: ");
  int N;
  scanf("%d", &N);
  //to compute the value of sum
  int sum=Sum(N);
  //to display the result
  printf("The sum of the first N natural numbers is %d", sum);
}