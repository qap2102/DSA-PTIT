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

int t,n,m,u ,v, mau;
int a[MAXN][MAXN];
// vector<int> adj[MAXN];
set<int> adj[N];
vector<pair<int,int>> vp;
bool visited[N];
int parent[MAXN];
int color[MAXN];
bool kt=false;
int check[MAXN][MAXN];
int siz[MAXN];

void dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>m>>u>>v;
        for(int i=0;i<m;++i){
            int x,y;
            cin>>x>>y;
            adj[x].insert(y);

        }
        int cnt=0;
        for(int i=1;i<=n;++i){
            memset(visited,false,sizeof(visited));
            visited[i]=true;
            dfs(u);
            if(!visited[v]){
                ++cnt;
            }
        }
        cout<<cnt<<endl;
        for(int i=1;i<=n;++i){
            adj[i].clear();
        }

    }
}