#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int main(){
    faster
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n], b[m];
        for(int i=0;i<n;++i){
            cin>>a[i];

        }
        sort(a,a+n);

        for(int i=0;i<m;++i){
            cin>>b[i];

        }
        sort(b,b+m, greater<int>());
        cout<<1ll*a[n-1]*b[m-1]<<endl;
    }
}
