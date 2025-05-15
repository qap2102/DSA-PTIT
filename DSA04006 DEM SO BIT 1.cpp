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
ll a[N], b[N], c[N*2];
vector<ll> v;
vector<vector<int>> vv;
bool kt = false;
string s,s1;


ll cal(ll n){
    if(n<1) return 0;
    if(n==1) return 1;
    ll tmp = floor(log2(n));
    if(!(n&(n-1))) return s[tmp]-'0'; // nếu n là lũy thừa của 2
    else {
        tmp = 1LL<<tmp;
    // tmp=pow(2,tmp);
    return cal(n-tmp);
}
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        
        cin>>n>>l>>r;
        s="";
        // cout<<(1<<n)<<endl;
        while(n){
            s=char(n%2+'0')+s;
            n/=2;
        }
        // chuyển sang chuỗi nhị phân
        // cout<<s<<endl;
        x=0;
        for(ll i =l;i<=r;++i) x+=cal(i);
        cout<<x<<endl;
        
    }
    
}