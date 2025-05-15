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
string s,s1;

ll check(string s){
    ll tmp = 0;
    ll mu = 1;
    for(int i=s.size()-1;i>=0;--i){
        tmp+=(s[i]-'0')*mu;
        mu*=2;
    }
    return tmp;
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s>>s1;
        cout<<check(s)*check(s1)<<endl;

    }
}