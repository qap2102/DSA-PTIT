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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<k;++i){
            cout<<a[n-i-1]<<" ";
        }
        cout<<endl;

    }
}
