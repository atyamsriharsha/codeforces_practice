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

long long n,m,type,sum,l,r;
long long a[100005],b[100005];
int main()
{
   cin>>n;
   for(int k=1;k<=n;k++)
   {
     cin>>a[k];
     b[k]=a[k];
   }
   sort(b+1,b+n+1);
   for(int k=2;k<=n;k++)
   {
      a[k]+=a[k-1];
      b[k]+=b[k-1];
   }
     cin>>m;
    for(int k=1;k<=m;k++)
    {
       cin>>type;cin>>l;cin>>r;
       if(type==1)
       {
         sum=a[r]-a[l-1];
       }
       else
       {
         sum=b[r]-b[l-1];
       }
       cout<<sum<<endl;
    }
}