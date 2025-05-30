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

void dfs(int u){
    for(int v:adj[u]){
        if(color[u]==color[v]){
            kt=true;
            return;
        }
        else if(color[v]==0){
            color[v] = 3 - color[u]; // Toggle between 1 and 2
            dfs(v);
        }
    }

}

int main(){
    faster;
    cin >> t;
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
        memset(color, 0, sizeof(color));
        for(int i=1;i<=n;++i){
            if(color[i]==0){
                color[i] = 1; 
                dfs(i);
            }
        }
        if(kt) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        for(int i=1;i<=n;++i){
            adj[i].clear();
            color[i] = 0; // Reset color for next test case
        }
    }
}