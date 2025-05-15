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



void Try1(ll n, ll k){
    if(!k) return;
    if(k==1) {
        cout<<'A'<<endl;
        return;
    }
    ll x = 1 << (n-1); // phép dịch bit sang trái n-1 đơn vị
    if(k==x) cout<<char(n+'A'-1)<<endl;
    else if(k<x){
        Try1(n-1,k);
    }
    else Try1(n-1,k-x);
}



int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>k;
        // x=0;
        Try1(n,k);
        
    }
}
// 121312141213121