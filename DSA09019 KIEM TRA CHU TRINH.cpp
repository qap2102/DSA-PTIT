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

int t,n,m,u ,v;
int a[MAXN][MAXN];
// vector<int> adj[MAXN];
set<int> adj[MAXN];
vector<pair<int,int>> vp;
bool visited[MAXN];
int parent[MAXN];
int color[MAXN];
bool kt=false;

void dfs(int u){
    visited[u]=true;
    for(int k:adj[u]){
        if(!visited[k]){
            parent[k]=u;
            dfs(k);
        }
        else if(visited[k]&&k!=parent[u]){
            kt=true;
            return;
        }
    }
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=m;++i){
            int x,y;
            cin>>x>>y;
            adj[x].insert(y);
            adj[y].insert(x);
        }
        kt=false;
        memset(visited,false,sizeof(visited));
        memset(parent,0,sizeof(parent));
        for(int i=1;i<=n;++i){
            if(!visited[i]&&!kt){
                dfs(i);
            }
        }
        if(!kt) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

        for(int i=1;i<=n;++i){
            adj[i].clear();
        }

    }
}