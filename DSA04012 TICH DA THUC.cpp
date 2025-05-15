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
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s,s1;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>x;
        for(int i=0;i<n;++i) cin>>a[i];
        for(int i=0;i<x;++i) cin>>b[i];
        memset(c,0,sizeof(c));
        for(int i=0;i<n;++i){
            for(int j=0;j<x;++j){
                c[i+j] += a[i]*b[j];
            }
        }
        for(int i=0;i<n+x-1;++i){
            cout<<c[i]<<" ";
        }
        cout<<endl;

    }
}