#include <stdio.h>
#include <stdlib.h>

void Change(int *N)
{
  *N=*N+20;
}
int main()
{
	printf("Enter any number: ");
  int N;
  scanf("%d", &N);
  //to see the changes
  printf("The original number is %d\n", N);
  Change(&N);
  printf("The updated number is %d", N);
}