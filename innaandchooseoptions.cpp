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
	int t, i, j, k, cnt, a[13], x;
	string s;
	cin >> t;
	while(t--) 
	{
		cin >> s;
		for(cnt=0,i=1; i<=12; i++) 
		{
			a[i]=0;
			if(12%i==0) 
			{
				for(j=0; j<12/i; j++) 
				{
					for(x=1,k=j; k<=12; k+=12/i) if(s[k]=='O') x=0;
					if(x==1) a[i]++;
				}
			}
			if(a[i]>0)
			 cnt++;
		}
		cout << cnt;
		for(i=1; i<=12; i++) 
			if(a[i]) cout<<" "<< i << "x" << 12/i;
		cout<<endl;
	}


  return 0 ;
}

