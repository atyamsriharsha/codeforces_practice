/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;

typedef long long		ll ;
typedef vector <int> 		vi ;
typedef pair <int, int>		ii ;
typedef vector <ii>		vii;
typedef set <int>		si ;
typedef map <string,int>	msi; 

#define REP(i,a,b) \
	for (int i = int (a) ; i <= int (b) ; i++) // a to b , i is local 
#define TRvi(c,it)  \
	for (vi::iterator it = (c).begin () ; it != (c).end () ; it++)
#define TRvii(c,it)  \
	for (vii::iterator it = (c).begin () ;it !=(c).end () ;it++) 
#define TRmsi(c,it)  \
	for (msi::iterator it = (c).begin () ;it != (c).end () ; it++)

#define INF 2000000000 
#define MEMSET_INF 127 
#define MEMSET_HALF_INF 63 
#define DFS_WHITE -1
#define DFS_BLACK 1
#define DFS_GRAY 2
int _sieve_size;
vector<int> primes;
bitset<5000005> bs;

#define I64 ll

void sieve(int upperbound)
{
	_sieve_size=upperbound+1;
	bs.set();
	bs[0]=bs[1]=0;
	for(ll i=2;i<=_sieve_size;i++)
		if(bs[i])
		{
			for(ll j=i*i;j<=_sieve_size;j+=i)
				bs[j]=0;
			primes.push_back((int)i);
		}
}

int dp[5000005];
void primefactors(int N)
{
	int temp=N;
	int pf_index=0;
	int pf=primes[pf_index],ans=0;
	while(pf*pf<=N)
	{
		while(N%pf==0) { N/=pf;ans++;}
		pf=primes[++pf_index];
	}
	if(N==1)
		dp[temp]=dp[temp-1]+ans;
	else dp[temp]=dp[temp-1]+ans+1;
}
	int
main ( int argc, char *argv[] )
{	
	sieve(5000000);
	dp[1]=0;
	REP(i,2,5000007)
	{
		if(bs[i]==false)
		primefactors(i);
		else{
			dp[i]=dp[i-1]+1;
		}
	}
	int a,b;
	int testcase;
	scanf("%d",&testcase);
	REP(i,0,testcase-1)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",dp[a]-dp[b]);
	}

	return EXIT_SUCCESS;
}	