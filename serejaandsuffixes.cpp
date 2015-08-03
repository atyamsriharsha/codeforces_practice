/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair<int,int> pii ;
typedef vector<pii> vii ;
#define pb push_back 
#define pf push_front

int main()
{
   int n,m,temp ;
   /*vector<int> result ;
   cin >> n >> m ;
   std::vector<int> numbers;
   map<int,bool>dp ;
   for(int i=0;i<n;i++)
   {
   	cin >> temp ;
   	numbers.push_back(temp) ;
   }
  // cout << numbers[n-1] ;
   for(int i=n-1;i>=0;i--)
   {
   	//cout << numbers[i] ;
   	dp[numbers[i]] = true ;
    result[i] = dp.size() ;
   }
   for(int i=0;i<m;i++)
   {
   	cin >> temp ;
   	cout << result[temp-1] << endl ;
   }*/
   	    cin >> n >> m ;
   	    int a[n];		
		for(int i = 0; i < n; ++i)
		{
			int value;
			cin >> value;	
			a[i] = value;
		}
		int  solution[n];
		map<int,bool> different;
		for(int i = n - 1; i >= 0; i--)
		{				
			different[a[i]] = true;
			solution[i] = different.size();
		}
		
		for(int i = 0; i < m; ++i)
		{
			int value;
			cin >> value;			
			cout << solution[value - 1] << endl;
		}
  return 0 ;
}

