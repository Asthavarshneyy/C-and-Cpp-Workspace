#include <stdio.h>
#include <stdlib.h>

int fib(int N)
{
  if(N==0)
   return 0;
  if(N==1)
   return 1;
  else 
   return fib(N-1)+fib(N-2);
}
int main()
{
	printf("Enter any number: ");
  int N;
  scanf("%d", &N);
  //to compute the fibonacci series till N
  printf("The fibonacci series till %d:\n", N);
  for(int i=0;i<N;i++)
  {
    printf("%d ",fib(i));       
  }
}