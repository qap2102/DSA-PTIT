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

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(auto x : adj[v]){
            if(!visited[x]){
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

int main(){
    faster;
    cin >> t;
    cin.ignore();
    while(t--){

        for(int i=1;i<=n;++i){
            adj[i].clear();
        }
        cin>>n>>m;
        for(int i=1;i<=m;++i){
            int x,y;
            cin>>x>>y;
            adj[x].insert(y);
        }
        memset(visited, false, sizeof(visited));
        bfs(1);
        int kt=1;
        for(int i=1;i<=n;++i){
            if(!visited[i]){
                kt=0;
                break;
            }
        }
        if(!kt) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}