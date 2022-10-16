#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int>> checkrev(int x1,int x2,int x3,int x4,int x5,int y1,int y2,int y3,int y4,int y5)
{
  int n=1,i=1,j=1;
  vector <pair<int,int>> ans;

  for(;i<=8,j<=8;i++,j++)
  {
    while(i+n<=8 && j+n<=8 && i-n>=1 && j-n>=1)
    {
      if((i+n==x1 && j+n==y1)||(i+n==x2 && j+n==y2)||(i+n==x3 && j+n==y3)||(i+n==x4 && j+n==y4)||(i+n==x5 && j+n==y5))
       continue;
      else if((i-n==x1 && j-n==y1)||(i-n==x2 && j-n==y2)||(i-n==x3 && j-n==y3)||(i-n==x4 && j-n==y4)||(i-n==x5 && j-n==y5))
       continue;
      else if((i+n==x1 && j-n==y1)||(i+n==x2 && j-n==y2)||(i+n==x3 && j-n==y3)||(i+n==x4 && j-n==y4)||(i+n==x5 && j-n==y5))
       continue;
      else if((i-n==x1 && j+n==y2)||(i-n==x2 && j+n==y2)||(i-n==x3 && j+n==y3)||(i-n==x4 && j+n==y4)||(i-n==x5 && j+n==y5))
       continue;
      else
      {
       ans.push_back(i,j);
      }
    }
  }
  return ans;
}

int main()
{
  
}