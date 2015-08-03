/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;

#define max1 100005
long long int dp[max1] ;
long long int ans[max1] ;
int main()
{
   memset(dp,0,sizeof(dp)) ;
   //cout << dp[0] ;
   int n,temp ;
   std::vector<int> v;
   cin >> n ;
   for(int i=0;i<n;i++)
   {
   	 cin >> temp ;
   	 dp[temp]+=1 ;
   	 v.push_back(temp) ;
   }
   ans[0] = 0 ;
   ans[1] = dp[1] ;
   for(int i=2;i<=max1;i++)
   {
   	ans[i] = max(ans[i-1],ans[i-2]+dp[i]*i) ;
   }
   cout << ans[max1] << endl ;
   
  
  return 0 ;
}