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
	std::vector<ll> bears;
	std::vector<ll> dp;
	ll n ,temp,ans=-1,index1=1,max1 = -1;
	cin >> n ;
//	bears.resize(n) ;
//	dp.resize(n);
	for(ll i = 0; i < n; ++i)
	{
		cin >> temp ;
		if(temp>ans)
			ans = temp ;
		bears.push_back(temp) ;
		dp.push_back(temp) ;
	}
	cout << ans  ;
  /*  for(std::vector<int>::iterator it=bears.begin();it!=bears.end();it++)
    {
    	cout << bears[*it] << " " ;
    }

    for (std::vector<int>::iterator it1 = dp.begin(); it1!=dp.end() ; it1++)
    {
    	cout << dp[*it1] << " " ;
    }
   */

	while(index1<n)
	{
	   //ans = *std::max_element(dp.begin(),dp.end()) ;
	 //  cout << ans << " ";
		max1 = -1 ;
	   for(ll i=0;i<n;i++)
	   {
	   	   if(i+index1<n)
	   	   {
	   	   	// cout << dp[i] << " " << bears[i+index1] << endl ; 
	          dp[i] = min(dp[i],bears[i+index1]) ;
	          if(dp[i]>max1)
	          {
	          	max1 = dp[i] ;
	          }
	        // cout << dp[i] << endl ;
	        // cout << "atyam" ;
	       }  
	   }
	   cout << " "<< max1  ;
	   index1++ ;
	}
	cout << endl ;
  return 0 ;
}

