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
ll a[N], b[N], c[N*2];
vector<ll> v;
vector<vector<ll>> vv;
bool kt = false;
string s, s1;

ll check(ll in[],  ll x, ll n){
    for(int i=0;i<n;++i){
        if(in[i]==x) return i;
    }
    return -1;
}

void cal(ll in[], ll pre[], ll n){
    ll root = check(in, pre[0], n);
    if(root!=0){
        cal(in, pre+1, root);
    }
    if(root!=n-1){
        cal(in+root+1, pre+root+1, n-root-1);
    }
    cout<<pre[0]<<" ";

}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        ll in[n];
        ll pre[n];
        for(int i=0;i<n;++i) cin>>in[i];
        for(int i=0;i<n;++i) cin>>pre[i];
        cal(in, pre, n);
        cout<<endl;
    }
}