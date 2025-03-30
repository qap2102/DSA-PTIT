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
const int N=1e5+5;



int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[100005];
        for(ll i=0;i<n;++i){
            cin>>a[i];

        }
        ll maxx=INT16_MAX;
        sort(a,a+n);
        for(ll i=1;i<n;++i){
            if(abs(a[i] - a[i+1]) < maxx) maxx = abs(a[i] - a[i+1]);
        }
        cout<<maxx<<endl;

    }
}
