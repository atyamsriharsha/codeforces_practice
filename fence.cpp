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


int n,k,ans=0,s[150005],i,j;
int main()
{
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    { 
    	scanf("%d",&s[i]);
    	s[i]+=s[i-1];
    }
    for(j=1;j<=n-k;j++)
    { 
    	if(s[ans+k]-s[ans]>s[j+k]-s[j])
    	 ans=j;
    }
    printf("%d\n",ans+1);
}
