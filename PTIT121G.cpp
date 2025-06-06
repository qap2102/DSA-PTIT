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

const int MAXN=105;

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
    for(int v:adj[u]){
        if(color[u]==color[v]){
            kt=true;
            return;
        }
        else if(color[v]==0){
            color[v]=3-color[u];
            dfs(v);
        }
    }
}

int main(){
    faster;
    while(1){
        cin>>n;
        if(!n) break;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;++j){
                cin>>a[i][j];
                if(a[i][j]==1 && i<j){
                    adj[i].insert(j);
                    adj[j].insert(i);
                    vp.push_back({i,j});
                }
            }
        }
        // for(int i=1;i<=n;++i){
        //     for(auto it:adj[i]){
        //         cout<<it<<" ";
        //     }
        //     cout<<endl;
        // }
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
            color[i] = 0; 
        }
    }
}