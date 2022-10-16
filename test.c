#include <stdio.h>
#include <string.h>

int toDeci(int num, int base)
{
   int res=0,power=1;
   while (num > 0) 
   {
      res+=(num%10)*power;
      power*=base;
      num /= 10;
   }
   printf("%d",res);
   return res;
}



char fromDeci(int base, int num)
{
   char res;
   while (num > 0) 
   {
      res+=num%base;
      num /= base;
   }
   strrev(res);
   return res;
}

int main()
{
   int N;
   scanf("%d",&N);
   int B1;
   scanf("\n%d",&B1);
   int B2;
   scanf("\n%d",&B2);
   int num = toDeci(N, B1);
   char ans = fromDeci(B2, num);
   printf("\n%s",ans);
   return 0;
}

