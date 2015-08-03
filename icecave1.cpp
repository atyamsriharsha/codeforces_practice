#include<bits/stdc++.h>
#define sz(x) int((x).size())

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int,int> PII;
typedef std::pair<ll,ll> PLL;

template<class T> inline T pr(T x) { return --x; }
template<class T> inline T nx(T x) { return ++x; }

const int maxn = 510;
int n,m,a0,b0,a1,b1,deg[maxn][maxn];
bool vis[maxn][maxn];
char a[maxn][maxn];
const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};

void dfs(int x,int y) 
{
    cout << x << " " << y << endl ;
    vis[x][y] = true;
    if(a[x][y]!='.')
     return;
    for (int d=0; d<4; ++d)
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
    if (vis[a1][b1] && (deg[a1][b1]>=2 || a[a1][b1]=='X')) puts("YES");
    else puts("NO");

    return 0;
}