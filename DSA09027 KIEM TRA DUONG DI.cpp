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


// chuyển ma trận kề sanh danh sách kề
int t, n, m,x,y,q,u,v;
set<int> adj[1001];
int a[1001][1001];
vector<pair<int,int>> vp;
bool visited[1001];
// adj lưu danh sách kề của đỉnh i

void dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        
        if(!visited[v]){
            dfs(v);
        }
    }

}

void bfs(int u){
    visited[u]=true;
    queue<int> qu;
    qu.push(x);
    
    while(!qu.empty()){
        int v = qu.front();
        qu.pop();
        for(int k:adj[v]){
            if(!visited[k]){
                visited[k]=true;
                qu.push(k);
            }
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
            cin>>x>>y;
            adj[x].insert(y);
            adj[y].insert(x);
        }
        memset(visited,false,sizeof(visited));
        cin>>q;
        while(q--){
            memset(visited,false,sizeof(visited));
            cin>>x>>y;
            queue<int> qu;
            qu.push(x);
            int kt=1;
            visited[x]=true;

            while(!qu.empty()){
                int k = qu.front();
                qu.pop();

                if(k==y){
                    kt=0;
                    break;
                }

                for(int z:adj[k]){
                    if(!visited[z]){
                        visited[z]=true;
                        qu.push(z);
                    }
                }
            }
            if(!kt) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        for(int i=1;i<=n;++i){
            adj[i].clear();
        }


        
        
        

    }
}