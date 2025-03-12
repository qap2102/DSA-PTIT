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
        int n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;++i) cin>>a[i];
        sort(a,a+n);
        ll dem=0;
        for(int i=0;i<n-1;++i){
            ll l=i+1,r=n-1;
            while(l<r){
                ll sum=a[i]+a[l]+a[r];
                if(sum>=k){
                    r--;
                }
                else {
                    dem+=r-l;
                    l++;
                }
            }
        }
        cout<<dem<<endl;
    }
}
