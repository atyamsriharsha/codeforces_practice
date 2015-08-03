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
	std::vector<int> v;
	int n,m,temp,ans ;
	int min1 = 1e8 ;
	cin >> n >> m ;
	for(int i=0;i<m;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	sort(v.begin(), v.end()) ;
	for(int it=0;it<m;it++)
	{
		int index1 = it+n-1 ;
		if(index1<m)
		{
           ans = v[index1] - v[it] ;
        //  cout << ans ;
          if(ans < min1)
          {
        	  min1 = ans ;
          }
        } 
	}
	cout << min1 ;

  return 0 ;
}

