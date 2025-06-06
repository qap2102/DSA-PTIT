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

int demtplt(){
    int cnt=0;
    for(int i=1;i<=n;++i){
        if(!visited[i]){
            ++cnt;
            dfs(i);
        }
    }
    return cnt;
}

int main(){
    faster;
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cin>>a[i][j];
            if(a[i][j]==1){
                adj[i].insert(j);
                if(i<j) vp.push_back({i,j});
            }
        }
    }
    memset(visited,false,sizeof(visited));
    int tmp=demtplt();

    vector<pair<int,int>> ans;
    

    for(auto it:vp){
        adj[it.fi].erase(it.se);
        adj[it.se].erase(it.fi);

        memset(visited,false,sizeof(visited));
        
        if(tmp<demtplt()){
            ans.push_back(it);
        }
        adj[it.fi].insert(it.se);
        adj[it.se].insert(it.fi);
    }

    cout<<ans.size()<<endl;
    for(int i=1;i<=n;++i){
        adj[i].clear();
    }
    
}