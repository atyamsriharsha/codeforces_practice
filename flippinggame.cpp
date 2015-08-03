/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;

int main()
{
	int n,temp,count1,max1=-1 ;
	cin >> n ;
	std::vector<int> v;
	//int a[n][n] ;
	int dp[n] ;
  //	memset(a,0,sizeof(a)) ;
	//memset(dp,0,n) ;
	for(int i = 0; i < n; ++i)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	for(int i=0;i<n;i++)
	{
		if(v[i]==1)
		{
		  dp[i] = 1 ;
		}
		else
		{
			dp[i] = 0 ;
		}
		if(i>0)
		{
		  dp[i] = dp[i-1] + dp[i] ;
		}
	}
/*	for(int i = 0; i < n; ++i)
	{
		cout << dp[i] << endl ;
	}
	*/
	int p ;
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			count1 = 0 ;
		    for(p=i;p<=j;p++)
		    {
                  if(v[p]==0)
                  {
                  	count1++ ;
                  }
		    }
		    for(int k=p;k<n;k++)
		    {
		    	if(v[k]==1)
		    	{
		    		count1++ ;
		    	}
		    }
		    if(i>0)
		     count1 = count1 + dp[i-1] ;
//		 cout << count1 << " " ;
		 if(count1>max1)
		 {
		 	max1 = count1 ;
		 }
		}
	}
    cout << max1 << endl ;
  return 0 ;
}