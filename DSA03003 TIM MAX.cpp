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
const int N=1e7+5;

int t,x;
int a[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;


int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        ll n;
        cin>>n;
        for(int i=0;i<n;++i) cin>>a[i];
        sort(a,a+n);
        x=0;

        for(int i=0;i<n;++i){
            x = (x %MOD + (a[i]%MOD * i%MOD)%MOD) %MOD;
        }
        cout<<x<<endl;

        
    }
}