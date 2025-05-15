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
const int M = 1005;


ll t,n,x,k;
int n1,x1,k1;
ll a[N], b[N], c[N*2];
ll a1[M];
vector<ll> v;
vector<vector<ll>> vv;
bool kt = false;
string s,s1;

ll dp[1005];


main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        for(ll i=0;i<n;++i) cin>>a1[i];
        x=0;
        for(ll i=0;i<n;++i){
            dp[i]=1;
            for(ll j=0;j<i;++j){
                if(a1[i]>=a1[j]) dp[i]=max(dp[i],dp[j]+1);
                
            }

            x = max(x,dp[i]);
        }

        cout<<n-x<<endl;

    }
}