#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define fi first
#define se second
const int MOD = 1e9+7;
const int N=1e6+5;

const int MAXN=1005;

int t,n,m,u ,v,q;
int a[MAXN][MAXN];
// vector<int> adj[MAXN];
// set<int> adj[MAXN];
vector<pair<int,int>> adj[MAXN];
vector<pair<int,int>> vp;
bool visited[MAXN];
int parent[MAXN];
int color[MAXN];
bool kt=false;
int check[MAXN][MAXN];

vector<vector<int>> d;

void nhap(){
    cin>>n>>m;
    d.resize(n+1,vector<int>(n+1,1e9));
    
    for(int i=1;i<=n;++i) d[i][i]=0;
    int x,y,w;
    for(int i=0;i<m;++i){
        cin>>x>>y>>w;
        d[x][y]=w;
        d[y][x]=w;
    }
    
}

void floyd(){
    for(int k=1;k<=n;++k){
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;++j){
                if(d[i][j]>d[i][k] + d[k][j]){
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }
    cin>>q;
    while(q--){
        cin>>u>>v;
        cout<<d[u][v]<<endl;
    }
}

int main(){
    faster;
    nhap();
    floyd();
}