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

long long s[1234567];

int main() 
{
  int n,foo;
  scanf("%d", &n);
  s[0] = 0;
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &foo);
    s[i + 1] = s[i] + foo;
  }
  long long ans = 0;
  if(s[n] % 3 == 0) 
  {
    long long u = s[n] / 3, v = 2 * s[n] / 3;
    long long cnt = 0;
    for(int i = 1; i < n; i++) 
    {
      if(s[i] == v) 
      {
        ans += cnt;
      }
      if(s[i] == u) 
      {
        cnt++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
