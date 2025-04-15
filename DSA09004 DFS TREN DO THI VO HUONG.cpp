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

int t,n,m,u;
int a[MAXN][MAXN];
// vector<int> adj[MAXN];
set<int> adj[MAXN];
vector<pair<int,int>> vp;
bool visited[MAXN];

void dfs(int u){
    visited[u]=true;
    cout<<u<<" ";
    for(int v:adj[u]){
        if(!visited[v]) dfs(v);
    }
}

int main(){
    faster;
    cin>>t;
    while(t--){
        
        cin>>n>>m>>u;
        for(int i=1;i<=m;++i){
            int x,y;
            cin>>x>>y;
            adj[x].insert(y);
            adj[y].insert(x);
            vp.push_back({x,y});
        }
        memset(visited,false,sizeof(visited));
        dfs(u);
        cout<<endl;
        vp.clear();
        
        
        for(int i=1;i<=n;++i) adj[i].clear();

    }
}