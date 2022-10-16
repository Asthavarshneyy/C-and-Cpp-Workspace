#include <stdio.h>
#include<string.h>
void main()
{
  printf("*******************\n");
  printf("7th program: Count the number of words in a sentence\n");
  printf("Coder:Astha Varshney\n");
  printf("*******************\n");
  printf("Enter any sentence\n");
  int len;
  char s[100];
  //scanf("%s",s);
  gets(s);
  len=strlen(s);
  int i=0;
  //printf("%d\n",len);
  int count=0;
  if(len==0)
  printf("Number of words in the input sentence is %d",count);
  else
  {
    for(i=0;i<len;i++)
    {
      if(s[i]==' ')
      {
        count++;
      }
    }
    printf("Number of words in the input sentence is %d", count+1);
  }
  printf("\n*******************\n");
  printf("END OF PROGRAM\n");
  printf("*******************\n");
}

  