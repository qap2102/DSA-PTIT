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

int t,n,m,u;
int a[MAXN][MAXN];
// vector<int> adj[MAXN];
set<int> adj[MAXN];
vector<pair<int,int>> vp;
bool visited[MAXN];

void bfs(int u){
    visited[u]=true;
    queue<int> q;
    q.push(u);
    
    while(!q.empty()){
        int v = q.front();
        
        q.pop();
        for(int k:adj[v]){
            if(!visited[k]){
                visited[k]=true;
                q.push(k);
            }
        }
    }
}
int demtplt(){
    int cnt=0;
    for(int  i=1;i<=n;++i){
        if(!visited[i]){
            cnt++;
            bfs(i);
        }
    }
    if(cnt==0) return -1;
    else return cnt;
}

int main(){
    faster;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=m;++i){
            int x,y;
            cin>>x>>y;
            adj[x].insert(y);
            adj[y].insert(x);
        }
        memset(visited,false,sizeof(visited));
        cout<<demtplt()<<endl;
        for(int i=1;i<=n;++i){
            adj[i].clear();
        }
    }
}