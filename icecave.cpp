/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;
#define ll long long

/*debugging*/

#define out1(x)cout<<#x<<" is "<<x<<endl
#define out2(x,y)cout<<#x<<" is "<<x<<" "<<#y <<" is "<<y<<endl
#define out3(x,y,z)cout<<#x<<" is "<<x<<" "<<#y<<" is "<<y<<" "<<#z<<" is "<<z<<endl;
#define out4(a,b,c,d)cout<<#a<<" is "<<a<<" "<<#b<<"  is "<<b<<" "<<#c<<" is "<<c<<" "<<#d<<" is "<<d<<endl;
#define show(i,a,n) for(i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
#define sz(a) cout<<"size of "<<#a<<" is "<<a.size()
#define exectime() cout<<"execution time "<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;

/*standard values*/

#define INF 1e18
#define PI 3.14159265359
#define MAX 1000006


/*Frequent functions*/
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define pu putchar
#define gu getchar
#define FastIn std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*loops and initialisation*/

#define init(a,b) memset(a,b,sizeof(a))
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repi(i,a,b) for(i=a;i>=b;i--)
#define repdf(i,a,b,d) for(i=a;i<=b;i+=d)
#define repdb(i,a,b,d) for(i=a;i>=b;i-=d)
#define TC() int t;cin>>t;while(t--)
#define vi vector<int> v
#define vc vector<char> v 
const int maxn = 510;
int n,m,a0,b0,a1,b1,deg[maxn][maxn];
bool vis[maxn][maxn];
char a[maxn][maxn];
const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};

void dfs(int x,int y) 
{
    //cout << x << " " << y << endl ;
    vis[x][y] = true;
    if(a[x][y]!='.')
     return;
    for(int d=0; d<4; ++d)
    {
        int xt = x+dx[d],yt = y+dy[d];
        if(1<=xt && xt<=n && 1<=yt && yt<=m && !vis[xt][yt])
            dfs(xt,yt);
    }
}

int main() 
{
    int i,j,k,t,tt,T,Test;
    scanf("%d%d",&n,&m);
    for(i=1; i<=n; ++i) 
    {
        scanf("%s",a[i]+1);
    }
    scanf("%d%d%d%d",&a0,&b0,&a1,&b1);
    a[a0][b0] = '.';
    for(int x=1; x<=n; ++x)
        for(int y=1; y<=m; ++y)
            for(int d=0; d<4; ++d)
            {
               int xt = x+dx[d],yt = y+dy[d];
                if(1<=xt && xt<=n && 1<=yt && yt<=m && a[xt][yt]=='.')
                    ++deg[x][y];
            }
    if(a0==a1 && b0==b1) 
    {
        if(deg[a0][b0]) puts("YES");
        else puts("NO");
        return 0;
    }
    dfs(a0,b0);
    if(vis[a1][b1] && (deg[a1][b1]>=2 || a[a1][b1]=='X')) puts("YES");
    else puts("NO");

    return 0;
}