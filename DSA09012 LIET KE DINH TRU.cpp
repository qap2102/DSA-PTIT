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

void dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(!visited[v]) dfs(v);
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
        memset(visited, false, sizeof(visited));

        int tplt=0;
        for(int i=1;i<=n;++i){
            if(!visited[i]){
                ++tplt;
                dfs(i);
            }
        }
        

        for(int i=1;i<=n;++i){
            int tplt1=0;
            memset(visited, false, sizeof(visited));
            visited[i]=true; // Giả sử xóa đỉnh i
            for(int j=1;j<=n;++j){
                if(!visited[j]){
                    tplt1++;
                    dfs(j);
                }
            }
            if(tplt1>tplt){
                cout<<i<<" ";
            }
        }
        cout << endl;
        for(int i=1;i<=n;++i){
            adj[i].clear();
        }


    }
}