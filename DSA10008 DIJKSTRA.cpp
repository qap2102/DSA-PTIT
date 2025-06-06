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
// set<int> adj[MAXN];
vector<pair<int,int>> adj[MAXN];
vector<pair<int,int>> vp;
bool visited[MAXN];
int parent[MAXN];
int color[MAXN];
bool kt=false;
int check[MAXN][MAXN];



void nhap(){
    cin>>n>>m>>u;
    int x,y,w;
    for(int i=0;i<=n;++i) adj[i].clear();
    for(int i=0;i<m;++i){
        cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
}

void dijkstra(){
    vector<int> d(n+1, 1e9);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;
    Q.push({0,u});
    d[u]=0;
    while(!Q.empty()){
        pair<int,int> top = Q.top();
        Q.pop();
        int dinh = top.se;
        int trongso = top.fi;
        if(trongso > d[dinh]) continue;
        for(auto it:adj[dinh]){
            int v = it.fi;
            int w1 = it.se;
            if(d[v] > d[dinh] + w1){
                d[v] = d[dinh] + w1;
                Q.push({d[v],v});
            }
        }
    }

    for(int i=1;i<=n;++i) cout<<d[i]<<" ";
    cout<<endl;
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        
        nhap();
        dijkstra();
    }
}