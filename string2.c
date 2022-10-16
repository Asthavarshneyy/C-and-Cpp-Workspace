#include <stdio.h>
#include<string.h>
void main()
{
  printf("*******************\n");
  printf("10th program: Count the occurance of each letter in a sentence\n");
  printf("Coder:Astha Varshney\n");
  printf("*******************\n");
  printf("Enter any sentence\n");
  int len;
  char s[100];
  gets(s);
  len=strlen(s);
  int *arr[26];
  