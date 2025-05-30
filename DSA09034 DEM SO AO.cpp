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

int t,n,m,u ,v, mau,k,x,y;
char a[MAXN][MAXN];
// vector<int> adj[MAXN];
set<int> adj[MAXN];
vector<pair<int,int>> vp;
bool visited[MAXN];
int parent[MAXN];
int color[MAXN];
bool kt=false;
int check[MAXN][MAXN];

int dx[8]= {1,1,1,-1,-1,-1,0,0};
int dy[8]= {1,0,-1,1,0,-1,1,-1};

void dfs(int u, int v){

    a[u][v]='.';
    for(int k=0;k<8;++k){
        int x = u + dx[k];
        int y= v + dy[k];
        if(x>=1&&x<=n&&y>=1&&y<=m && a[x][y]=='W') dfs(x, y);
    }
}

int main(){
    faster;
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            if(a[i][j]=='W'){
                ++cnt;
                dfs(i, j);
            }
        }
    }
    cout<<cnt<<endl;

}