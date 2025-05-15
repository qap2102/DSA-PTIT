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

ll t,n,x,k,l,r;
int n1,x1,k1;
int a[N], b[N], c[N*2];
vector<ll> v;
vector<vector<int>> vv;
bool kt = false;
string s,s1;

main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){

        cin>>n>>k;
        memset(a,0,sizeof(a));
        a[0]=1;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=k;++j){
                if(i-j<0) break;
                a[i]=(a[i]+a[i-j])%MOD;
            }
        }
        cout<<a[n]<<endl;
        
        
        
    }
}