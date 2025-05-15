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


int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        cin>>s1;
        
        x = s.size();
        k = s1.size();
        for(ll i=0;i<=x;++i){
            for(ll j=0;j<=k;++j){
                if(!i||!j){
                    dp[i][j]=0;
                }
                else {
                    if(s[i-1]==s1[j-1]){
                        dp[i][j]=dp[i-1][j-1]+1;
                    }
                    else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }

        cout<<dp[x][k]<<endl;
    }
}