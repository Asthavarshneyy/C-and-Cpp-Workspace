#include <iostream>
#include<string.h>
#include <algorithm>
using namespace std;

int toDeci(int num, int base)
{
   int res=0,power=1;
   while (num > 0) 
   {
      res+=(num%10)*power;
      power*=base;
      num /= 10;
   }
   //cout<<res<<endl;
   return res;
}

char change(int num)
{
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + 'A');
}

string fromDeci(int base, int num)
{
   string res="";
   while (num > 0) 
   {
      res+=change(num%base);
      num /= base;
   }
   reverse(res.begin(),res.end());
   return res;
}

int main()
{
   int N;
   cin>>N;
   int B1;
   cin>>B1;
   int B2;
   cin>>B2;
   int num = toDeci(N, B1);
   string ans = fromDeci(B2, num);
   cout<<ans<<endl;
   return 0;
}

