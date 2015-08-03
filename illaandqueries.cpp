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

int main()
{
	int m,l,r ;
	string s ;
	cin >> s ;
	int length = s.length() ;
	int dp[length+2] ;
	memset(dp,0,sizeof(dp)) ;
	if(s[0]==s[1])
		dp[2] = 1 ;
	for(int i=2;i<length;i++)
	{
		if(s[i-1]==s[i])
		{
			dp[i+1] = dp[i] + 1 ;
		}
		else
		{
			dp[i+1] = dp[i] ;
		}
	}
    cin >> m ;
    for(int i=0;i<m;i++)
    {
    	cin >> l >> r ;
    	cout << dp[r]-dp[l] << endl ;
    }

  return 0 ;
}

