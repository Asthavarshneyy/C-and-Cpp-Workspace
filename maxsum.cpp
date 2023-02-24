
#include <iostream>
#include <cstring>
using namespace std;

/*int maxsum(int a[], int n)
{
	int curr_sum=0;
	int max_so_far=INT_MIN;
	int min_element=INT_MIN;
  int flag=-1;
	for(int i=0;i<n;i++)
	{
    if(a[i]>=0)
     flag=0;
		min_element=a[i]>min_element? a[i]: min_element;
		curr_sum+=a[i];
		if(curr_sum<0)
		 curr_sum=0;
		max_so_far=max(curr_sum,max_so_far);
	}
  if(flag==-1)
   max_so_far=min_element;
	return max_so_far;
}*/

/*int maxprofit(int prices[], int n, int dp[])
{
	//base case
if(n==0)
 return 0;
int ans=INT_MIN;

//lookup
if(dp[n]!=0)
 return dp[n];

//rec case
for(int i=0;i<n;i++)
{
int cut=i+1;
int currans=prices[i]+maxprofit(prices, n-cut, dp);
ans=max(ans, currans);
}
return dp[n]=ans;
	}*/

/*int numways(int r, int c)
{
	//base case
	if(dp[0][0]==-1] or dp[r-1][c-1]==-1) //if starting cell or target cell is blocked
	 return 0;
	
	//no. of ways for 1st row
	for(int j=0;j<col;j++)
	{
		if(dp[0][j]==-1)
		 break;
		dp[0][j]=1;
	}
		
	//no. of ways for 1st column
	for(int j=0;j<col;j++)
	{
		if(dp[j][0]==-1)
		 break;
		dp[j][0]]=1;
	}

	//bottom up approach for the rest of the matrix
	for(int i=1;i<r;i++)
	{
		for(int j=1;j<c;j++)
		{
			//if cell is blocked leave it -> go to the next cell
			if(dp[i][j]==-1)
			 continue;
			
			dp[i][j]=0;

			if(dp[i][j-1]!=-1)
			 dp[i][j]=dp[i][j-1]%MOD;

			if(dp[i-1][j]!=-1)
			 dp[i][j]=(dp[i][j]+dp[i-1][j])%MOD;
			
		}
		return dp[r-1][c-1];
	}*/



int main() {
	string s="Astha";
	cout<<s.charAt(3);
}
