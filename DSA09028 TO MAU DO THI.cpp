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
set<int> adj[MAXN];
vector<pair<int,int>> vp;
bool visited[MAXN];
int parent[MAXN];
int color[MAXN];
bool kt=false;
int check[MAXN][MAXN];

void dfs(int u){
    color[u] = mau;
    for(int v:adj[u]){
        if(color[v] == mau){
            kt = true;
            return;
        }
        else if(color[v] == 0){
            dfs(v);
        }
    }
}

int main(){
    faster;
    cin >> t;
    cin.ignore();
    while(t--){
        cin>>n>>m>>mau;
        for(int i=1;i<=m;++i){
            int x,y;
            cin>>x>>y;
            adj[x].insert(y);
            adj[y].insert(x);
        }
        memset(color, 0, sizeof(color));
        kt = false;
        
        if(kt) cout << "NO" << endl;
        else cout << "YES" << endl;
        for(int i=1;i<=n;++i){
            adj[i].clear();
        }
    }
}