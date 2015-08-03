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

	int m,s,a[105],b[105] ;
	cin >> m >> s ;
    if(s==0 && m==1)
    {
    	cout << 0 << " 0" << endl ;
    	return 0 ;
    }
    if(s>m*9 || s==0)
    {
    	cout << "-1 -1" << endl ;
    	return 0 ;
    }
    int ss = s ;
    for(int i=0;i<m;i++)
    {
    	int x = min(s,9) ;
    	a[i] = x ;
    	s = s- x ;
    }
    string x = "", xx = "";
    for(int i=0; i<m; i++)                
        xx += (a[i] + '0');
    memset(b, 0, sizeof(b));    
    b[0] = 1; 
    ss --;                  
    for(int i=m-1; i>0; i--)
    {           
       int x = min(ss, 9);
       b[i] = x;
       ss -= x;
    }
    if(ss) 
       b[0] += ss;
    for(int i=0; i<m; i++)
       x += (b[i] + '0');
    cout<<x<<" "<<xx<<endl;
  return 0 ;
}

