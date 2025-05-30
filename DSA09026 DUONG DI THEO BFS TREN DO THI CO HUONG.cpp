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
bool kt=false;

void dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(!visited[v]){
            
            parent[v] = u;
            dfs(v);
        }
    }
}

void bfs(int u){
    visited[u]=true;
    queue<int> q;
    q.push(u);

    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int k:adj[v]){
            if(!visited[k]){
                q.push(k);
                visited[k]=true;
                parent[k]=v;
            }
        }
    }
}

void path(int u, int v){
    memset(visited,false,sizeof(visited));
    memset(parent,0,sizeof(parent));
    bfs(u);
    if(!visited[v]){
        cout<<-1<<endl;
    }
    else {
        vector<int> p;
        while(v!=u){
            p.push_back(v);
            v = parent[v];
        }
        p.push_back(u);
        reverse(p.begin(),p.end());
        for(int k:p){
            cout<<k<<" ";
        }
    }
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>m>>u>>v;
        for(int i=1;i<=m;++i){
            int x,y;
            cin>>x>>y;
            adj[x].insert(y);
        }
        memset(visited,false,sizeof(visited));
        memset(parent,0,sizeof(parent));
        path(u,v);
        cout<<endl;
        for(int i=1;i<=n;++i) adj[i].clear();
        
        
        

    }
}