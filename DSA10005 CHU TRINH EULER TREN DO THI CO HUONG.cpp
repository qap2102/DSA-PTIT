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




int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        
        cin>>n>>m;
        int degin[1005]={0};
        int degout[1005]={0};
        for(int i=1;i<=m;++i){
            int x,y;
            cin>>x>>y;
            degin[x]++;
            degout[y]++;
        }
        int cnt=0;
        for(int i=1;i<=n;++i){
            if(degin[i]==degout[i]) ++cnt;
        }

        if(cnt==n) cout<<"1"<<endl;
        else cout<<"0"<<endl;

        
    }
}