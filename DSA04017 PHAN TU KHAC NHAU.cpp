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

int t,n,x,k;
ll a[N], b[N], c[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        for(int i=0;i<n;++i) cin>>a[i];
        for(int i=0;i<n-1;++i) cin>>b[i];
        for(int i=0;i<n;++i){
            if(a[i]!=b[i]){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}