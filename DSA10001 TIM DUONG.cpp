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

int t,n,m,u ,v, mau;
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

char dc[4] = {'D', 'R', 'U', 'L'};

void dfs(int u, int v, int i, char c){
    check[u][v] = 1;

    if(a[u][v]=='T' && i<=2){
        kt = true;
        return;
    }
    if(a[u][v]=='T' || i>2){
        check[u][v] = 0;
        return;
    }

    for(int k=0;k<4;++k){
        int x = u + dx[k];
        int y = v + dy[k];
        if(x>=0 && x<n && y>=0 && y<m && a[x][y]!='*' && !check[x][y]){
            if(dc[k]!=c){
                dfs(x, y, i+1, dc[k]);
            }
            else {
                dfs(x, y, i, dc[k]);
            }
        }

    }

    check[u][v] = 0;

}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>m;
        int i1=0, j1=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>a[i][j];
                if(a[i][j]=='S'){
                    i1 = i;
                    j1 = j;
                }
            }
        }
        kt = false;
        memset(check, 0, sizeof(check));
        dfs(i1,j1,-1,'G');
        if(kt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}