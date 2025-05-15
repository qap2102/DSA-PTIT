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

ll t,n,x,k;
int n1,x1,k1;
ll a[N], b[N], c[N*2];
vector<ll> v;
vector<vector<ll>> vv;
bool kt = false;
string s,s1;

ll dp[1005][1005];

void Try(){
    dp[0][0]=1;
    dp[1][0]=1;
    for(ll i=1;i<=1000;++i){
        for(ll j=0;j<i+1;++j){
            dp[i][j]=(dp[i-1][j-1]%MOD+dp[i-1][j]%MOD)%MOD;
        }
    }
}



int main(){
    faster;
    cin>>t;
    cin.ignore();
    Try();
    while(t--){

        cin>>n>>k;
        
        cout<<dp[n][k]<<endl;

        
    }
}