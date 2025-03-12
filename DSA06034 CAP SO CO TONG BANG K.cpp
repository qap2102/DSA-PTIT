#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long



int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        map<ll,ll> mp; 
        ll a[100005];
        for(int i=0;i<n;++i){
            cin>>a[i];
            mp[a[i]]++;
        }
        ll cnt=0;
        for(int i=0;i<n;++i){
            if(mp[a[i]]&&mp[k-a[i]]){
                if(a[i]!=k-a[i]){
                    cnt+=mp[a[i]] * mp[k - a[i]];
                    mp[a[i]]=0;
                    mp[k-a[i]]=0;
                }
                else {
                    cnt+=mp[a[i]] * (mp[a[i]] - 1) / 2;
                    mp[a[i]] = 0; 
                }
            }
        }
        cout<<cnt<<endl;


    }
}
