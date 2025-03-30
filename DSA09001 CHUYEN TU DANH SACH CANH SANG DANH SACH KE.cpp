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



int a[1001][1001];
vector<pair<int,int>> vp;

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int V,E;
        cin>>V>>E;
        vector<int> adj[1001];
        while(E--){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i=1;i<=V;++i){
            cout<<i<<": ";
            for(int k:adj[i]){
                cout<<k<<" ";
            }
            cout<<endl;
        }
    }
}