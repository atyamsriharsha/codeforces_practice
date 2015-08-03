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

int dp[2005][2005]={{0,1}};
clock_t begin,end ;
int main()
{
  begin = clock() ;
  int n,k,ans=0,MOD=1000000007;
  double time_spent ;
  cin>>n>>k;
  for(int i=0;i<k;i++)
  for(int j=1;j<=n;j++)
  for(int x=j;x<=n;x+=j)
  (dp[i+1][x]+=dp[i][j])%=MOD;
  for(int i=1;i<=n;i++)(ans+=dp[k][i])%=MOD;
  cout<<ans << endl;
  end = clock() ;
  time_spent =double(end - begin)/CLOCKS_PER_SEC ;
  cout << time_spent << endl ;
  return 0;
}
