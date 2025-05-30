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

int t,n,m;
int a[MAXN][MAXN];
// vector<int> adj[MAXN];
vector<pair<int,int>> adj[MAXN];
vector<pair<int,int>> vp;
bool visited[MAXN];
int parent[MAXN];
int color[MAXN];
bool kt=false;
int d[MAXN];

struct canh
{
    int x,y,w;
};


void nhap(){
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
    memset(visited,false,sizeof(visited));
    for(int i=1;i<=n;++i){
        d[i]=INT_MAX;
    }
}

void prim(int u){

    vector<canh> MST;
    int d=0;
    visited[u]=true;
    while(MST.size()<n-1){
        int minw = INT16_MAX;
        int X,Y;
        for(int i=1;i<=n;++i){
            if(visited[i])
            {
                for(pair<int,int> it:adj[i]){
                    int j = it.fi;
                    int trongso = it.se;
                    if(!visited[j]&&trongso<minw){
                        minw = trongso;
                        X = j;
                        Y = i;
                    }
                }
            }
        }
        MST.push_back({X,Y,minw});
        d+=minw;
        visited[X]=true;
    }
    cout<<d<<endl;
    for(canh e : MST){
        cout<<e.x<<" "<<e.y<<" "<<e.w<<endl;
    }
}

void prim1(int u){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;
    vector<canh> MST;
    int res=0;
    Q.push({0,u});
    while(!Q.empty()){
        pair<int,int> top = Q.top();
        Q.pop();
        int dinh = top.se;
        int trongso = top.fi;
        if(visited[dinh]) continue;
        
        res+=trongso;
        visited[dinh] = true;
        if(u!=dinh){
            MST.push_back({dinh,parent[dinh],trongso});
        }
        
        for(auto it:adj[dinh]){
            int y = it.fi;
            int w = it.se;
            if(!visited[y]&&w<d[y]){
                Q.push({w,y});
                d[y]=w;
                parent[y]=dinh;
            }
        }
        
    }
    cout<<res<<endl;
    for(auto it:MST){
        cout<<it.x<<" "<<it.y<<" "<<it.w<<endl;
    }
}

int main(){
    nhap();
    prim1(1);
}
