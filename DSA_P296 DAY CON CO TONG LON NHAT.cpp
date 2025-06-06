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

int n,q,l,r;
int a[100005];

int main(){
    faster;
    cin>>n>>q;
    ll sum[n+5]={};
    for(int i=1;i<=n;++i){
        cin>>a[i];
        sum[i]=0;
    }
    
    for(int i=2;i<=n;++i){
        if(sum[i-1]+a[i]<sum[i-1]){
            sum[i]=sum[i-1];
            
        }
        else {
            if(sum[i-1]+a[i]<=a[i]){
                sum[i]=a[i];
            }
            else sum[i]=sum[i-1]+a[i];
        }
    }
    while(q--){
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }
}