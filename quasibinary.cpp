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
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define all(x) (x).begin(), (x).end()

/*int main()
{
	int n ,p,rem,max1=-1,sum=0;
	cin >> n ;
	p = n ;
	std::vector<int> result;
	while(p!=0)
	{
		rem = p%10 ;
		if(rem>max1)
			max1 = rem ;
		p = p/10 ;
	}
	p = n ;
	int ans ;
	cout << max1 << endl ;
	while(sum<n)
	{   
		result.clear() ;
		if(p<=9)
		{
		   for(int i=0;i<n;i++)
		   {
			  cout << 1 << " "  ;
		   }
		   cout << endl ;
		   return 0 ;
		}
		else
		{
		   int i = 0 ;
		   while(p!=0)
		   {
			  rem = p%10 ;
			   if(rem!=0)
			   {
				 ans =  1;
				  result.push_back(ans) ;
			   }
			    else
			    {
				   ans = 0 ;
				   result.push_back(ans) ;
			    }
		             //	cout << ans << " " ;
			        sum+=ans*pow(10,i) ;
                	//		cout << sum << endl;
			        i++ ;
			        p = p/10 ;
		    }
		    for(std::vector<int>::iterator it = result.end()-1;it>=result.begin();it--)
		    {
			   cout << result[*it] ;
		    }
		    cout << " " ;
		     p = n ;
		     p = p - sum ;
	   }
	}
       return 0 ;
}
*/
int main()
{
	int N ;
	vi a ;
	cin >> N ;
	while(N!=0)
	{
		int n = N, m = 0, p = 1;
        while(n) 
        {
            if(n % 10) 
            	m += p;
             n /= 10;
             p *= 10;
        }
       // cout << m << " ";
        a.pb(m);
        N -= m;
	}
	cout << a.size() << '\n';
    sort(all(a));
    for(int i=0;i<a.size();i++)
    {
    	cout << a[i] << " " ;
    }
    cout << '\n';
	return 0 ;
}
