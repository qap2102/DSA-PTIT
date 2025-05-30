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
int parent[MAXN];
bool kt=false;

int startt, endd;

bool dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(!visited[v]){
            parent[v]=u;
            if(dfs(v)) return true;
        }
        else if(v!=parent[u]){
            startt = v;
            endd = u;
            return true;
        }
    }
    return false;
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
        memset(visited,false,sizeof(visited));
        startt = endd = -1;
        memset(parent,0,sizeof(parent));
        if(!dfs(1)) cout<<"NO"<<endl;
        else {
            vector<int> cyc;
            cyc.push_back(startt);
            while(endd!=startt){
                cyc.push_back(endd);
                endd = parent[endd];
            }
            cyc.push_back(startt);
            reverse(cyc.begin(),cyc.end());
            for(int x:cyc){
                cout<<x<<" ";
            }
            cout<<endl;
            return 0;
        }
        for (int i = 1; i <= n; ++i) adj[i].clear();


    }
}