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

int t,n,k;


int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>k;
        ll dp[100005]={};
        dp[0]=1;
        dp[1]=1;
        ll sum=1;
        for(int i=2;i<=k;++i){
            sum = (sum + dp[i-1])%MOD;
            dp[i]=sum;
        }
        for(int i=k+1;i<=n;++i){
            sum = (sum - dp[i-k-1] + dp[i-1] + MOD)%MOD;
            dp[i]=sum;
        }
        cout<<dp[n]<<endl;
    }
}