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
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s,s1;

void cal(vector<ll> v){
    vector<int> dp(n,1);
    for(ll i=1;i<=n;++i){
        for(ll j=0;j<i;++j){
            if(v[i]>v[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    cout<<*max_element(dp.begin(),dp.end());
}

int main(){
    faster;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    cal(a);

}