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

vector<int> adj[1001];
int degree[1001];

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        memset(degree,0,sizeof(degree));
        for(int i=1;i<=n;++i){
            adj[i].clear();
        }
        for(int i=1;i<=m;++i){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x); // nếu đồ thị có hướng thì không có push x vào y
            degree[x]++;
            degree[y]++;
        }
        
        // for(int i=1;i<=n;++i){
        //     cout<<degree[i]<<" ";
        // }
        // cout<<endl;
        int cnt=0;
        int kt=0;
        for(int i=1;i<=n;++i){
            if(degree[i]&1){
                cnt++;
                kt=1;
            }
        }
        if(kt==0) cout<<"2"<<endl;
        else if(cnt==2) cout<<"1"<<endl;
        else cout<<"0"<<endl;
        
        
    }
}