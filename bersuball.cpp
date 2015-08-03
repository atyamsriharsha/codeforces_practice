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
	int n,m,temp,count1=0 ;
	std::vector<int> boys;
	std::vector<int> girls;
	std::vector<bool> visited;
	cin >> n ;
	for(int i = 0; i < n; i++)
	{
		cin >> temp ;
		boys.push_back(temp) ;
	}
	cin >> m ;
	for(int i = 0; i < m; i++)
	{
	    cin >> temp ;
	    girls.push_back(temp) ;
	    visited.push_back(1) ;
	}
	sort(boys.begin(),boys.end()) ;
	sort(girls.begin(),girls.end()) ;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(abs(boys[i]-girls[j])<=1 && visited[j]==1)
			{
				count1++ ;
                visited[j] = 0 ;
				break ;
			}
		}
	}
	cout << count1 << endl ;
  return 0 ;
}

