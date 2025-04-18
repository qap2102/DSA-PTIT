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

int t,n,x;
ll a[N], b[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s;

int main(){
    faster;
    cin>>n;
    for(int i=0;i<n;++i) cin>>a[i];
    // lấy n - độ dài dãy con dài nhất

    int f[n+1]={};
    x=0;
    for(int i=0;i<n;++i){
        f[a[i]] = f[a[i]-1]+1;
        x = max(x, f[a[i]]);
    }
    // for(int i=0;i<n;++i){
    //     cout<<f[i]<<" ";
    // }
    cout<<n-x<<endl;
    // b1: chuyển 4 về cuối = 1 2 5 3 4
    // b2: chuyển 5 về cuối = 1 2 3 4 5
    
}