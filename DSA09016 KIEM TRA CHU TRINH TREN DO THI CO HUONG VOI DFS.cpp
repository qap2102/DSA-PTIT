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

bool dfs(int u){
    color[u]=1;
    for(int v:adj[u]){
        if(color[v]==0){
            if(dfs(v)) return true;
        }
        else if(color[v]==1) return true;
    }
    color[u]=2;
    return false;
}



int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        
        cin>>n>>m;
        for(int i=1;i<=n;++i){
            adj[i].clear();
        }
        for(int i=1;i<=m;++i){
            int x,y;
            cin>>x>>y;
            adj[x].insert(y);
        }
        memset(visited,false,sizeof(visited));
        memset(color,0,sizeof(color));
        kt=false;

        for(int i=1;i<=n;++i){
            if(color[i]==0){
                if(dfs(i)){
                    kt=true;
                    break;
                }
                
            }
        }
        if(!kt) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
        

        
    }
}