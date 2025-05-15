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
ll a[N], b[N], c[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s;

ll luythua(ll a, ll b){
    if(!b) return 1;
    ll c = luythua(a, b/2);
    c = (c*c)%MOD;
    if(b&1) c = (c*a)%MOD;
    return c;
}

int main(){
    faster;
    while(1){
        cin>>n>>x;
        if(!n&&!x) break;
        cout<<luythua(n, x)<<endl;


    }
}