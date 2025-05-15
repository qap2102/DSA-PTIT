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
bool check[40005];

main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>k;
        kt = false;
        for(ll i=0;i<n;++i) cin>>a[i];
        
        memset(check,false,sizeof(check));

        check[0]=true;

        for(ll i=0;i<n;++i){
            for(ll j=k;j>=a[i];--j){
                if(check[j-a[i]]){
                    check[j]=true;
                }
            }
        }
        if(check[k]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}