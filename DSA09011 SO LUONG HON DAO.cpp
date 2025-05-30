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

void loang(int i, int j){
    check[i][j] = 1;
    for(int k=0;k<8;++k){
        int x = i + dx[k];
        int y = j + dy[k];
        if(x>=0 && x<n && y>=0 && y<m && a[x][y] && !check[x][y]){
            loang(x, y);
        }
        
    }

}



int main(){
    faster;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin >> n >> m;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>a[i][j];
                
            }
        }

        memset(check, 0, sizeof(check));
        int cnt=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(a[i][j] && !check[i][j]){
                    loang(i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
        


    }
    
}