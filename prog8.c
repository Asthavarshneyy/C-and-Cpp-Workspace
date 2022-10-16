#include <stdio.h>
void main()
{
  printf("*******************\n");
  printf("8th program:Palindrome number\n");
  printf("Coder:Astha Varshney\n");
  printf("*******************\n");
  printf("Enter any number to check if it is a palindrome number\n");
  int num;
  scanf("%d",&num);
  if(num<0)
    printf("Not a palindrome number");
  else
  {
    int n = num;
    int d;
    int y=0;
    while (n) 
    {
      d = n % 10;
      y = y * 10 + d;
      n = n / 10;
    }
    if(y==num)
      printf("Yes, the number you entered is a palindrome number");
    else
      printf("Not a palindrome number");  
  }
  printf("\n*******************\n");
  printf("END OF PROGRAM\n");
  printf("*******************\n");
}
