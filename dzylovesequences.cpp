/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;
typedef vector<int> vi ;
#define pb push_back 
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

int main()
{
	int n,temp,res=0 ;
	int numbers[100010],dp[100010],dp2[100010] ;
//	std::vector<int> numbers;
//	std::vector<int> dp;
//	std::vector<int> dp2;
	cin >> n ;
//	dp.resize(n) ;
//	dp2.resize(n) ;
	for(int i=0;i<n;i++)
	{
       cin >> temp ;
       numbers[i] = temp ;
	}
	//dp.pb(1) ;
	dp[0] =1 ;
	for(int i=1;i<n;i++)
	{
       if(numbers[i]>numbers[i-1])
       {
       	dp[i] = dp[i-1] + 1 ;
       }
       else
       {
       	dp[i] = 1 ;
       }
	}
/*    for(int i=0;i<n;i++)
	{
		cout << dp[i] << " " ;
	}
    cout << endl ;
    */
	for(int i=n-1;i>=0;i--)
	{
		if(i==n-1)
			dp2[i] = 1 ;
		else
		{
			if(numbers[i]<numbers[i+1])
			{
				dp2[i] = dp2[i+1] + 1 ;
			}
			else
			{
				dp2[i] = 1 ;
			}
		}
	}
/*	for(int i=0;i<n;i++)
	{
		cout << dp2[i] << " " ;
	}
	*/
//	cout << endl ;
	for(int i=n-1;i>=0;i--)
	{
		if(numbers[i+1] > numbers[i-1]+1)
		{
			res = max(res,1+dp[i-1] + dp2[i+1]) ;
		}
		else
		{
			res = max(res,1+ max(dp[i-1],dp2[i+1])) ;
		}
	}
    cout << res << endl ;
  return 0 ;
}

