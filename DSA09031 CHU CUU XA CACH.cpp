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

const int MAXN=505;

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

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    faster;
    cin>>n>>k>>m;
    for(int i=1;i<=m;++i){
        cin>>u>>v>>x>>y;

    }
    for(int i=1;i<=k;++i){
        int i1,j1;
        cin>>i1>>j1;
    }

}