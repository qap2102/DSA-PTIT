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

int t,n,m,u ,v, mau;
int a[MAXN][MAXN];
// vector<int> adj[MAXN];
set<int> adj[N];
vector<pair<int,int>> vp;
bool visited[N];
int parent[MAXN];
int color[MAXN];
bool kt=false;
int check[MAXN][MAXN];
int siz[MAXN];

pair<int,int> p[MAXN];

void make_set(){
    for(int i=1;i<=n;++i){
        parent[i]=i;
        siz[i]=1;
    }
}

int find(int v){
    if(v==parent[v]) return v;
    return parent[v] = find(parent[v]);
}


bool Union(int a, int b){
    a = find(a);
    b = find(b);

    if(a==b) return false;
    else if(a!=b){
        if(siz[a]<siz[b]){
            swap(a,b);
        }
        parent[b]=a;
        siz[a]+=siz[b];
        return true;
    }
    
}

bool check1(){
    for(int i=0;i<m;++i){
            if(!Union(p[i].fi, p[i].se)){
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
        for(int i=0;i<m;++i){
            cin>>p[i].fi>>p[i].se;
        }
        make_set();
        if(check1()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}