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

int main(){
    faster;
    cin>>n;
    ll f[n+1];
    f[0]=0;
    f[1]=1;
    for(ll i=2;i<=n;++i){
        f[i]=f[i-1]+f[i-2];
    }
    cout<<f[n];
}