/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;

#define pb push_back 
#define pf push_front
#define max1 4000

int solve(int n,int a,int b,int c)
{
  int inp[] ={a,b,c} ;
  int dp[max1] = {} ;
  for(int i=0;i<3;i++)
  {
  	dp[inp[i]] = max(dp[inp[i]],1) ;
  	for(int j = inp[i]+1;j<=n;j++)
  	{
  		if(dp[j-inp[i]]>0)
  		{
  			dp[j] = max(dp[j],1+dp[j-inp[i]]) ;
  		}
  	}
  }
  assert(dp[n]!=0) ;
  return dp[n] ;
}

int main()
{
	int n,a,b,c ;
	int result;
	cin >> n >> a >> b >> c ;
	cout << solve(n,a,b,c) << endl ;
    return 0 ;
}