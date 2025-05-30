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
int check[MAXN][MAXN];

int dx[8] = {1,1,1,-1,-1,-1,0,0};
int dy[8] = {1,0,-1,1,0,-1,1,-1};

void dfs(int u, int i){

    if(i==n){
        kt=true;
        return;
    }
    
    for (int v : adj[u]) {
        if (!visited[v]) {
            visited[v] = true;
            dfs(v, i + 1);
            visited[v] = false;
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

        for(int i=1;i<=n;++i){
            memset(visited, false, sizeof(visited));
            visited[i]=true;
            dfs(i, 1);
            if(kt){
                cout<<"1"<<endl;
                break;
            }
            visited[i]=false;
        }
        if(!kt) cout<<"0"<<endl;
        for(int i=1;i<=n;++i){
            adj[i].clear();
        }
    }
}