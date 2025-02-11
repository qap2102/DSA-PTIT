#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int n,k;


void solve(){
    cin>>n>>k;
    int a[k+1], b[k+1];
    int cnt=0;
    
    for(int i=1;i<=k;++i){
        cin>>a[i];
        b[i]=a[i];
    }
    int i=k;
    while(i>0&&b[i]==n-k+i) --i;
    if(i<1){
        cout<<k<<endl;
    }
    else {
        b[i]++;
        
        for(int j=i+1;j<=k;++j){
            b[j]=b[j-1]+1;

        }
        for(int j=1;j<=k;++j){
            for(int i=1;i<=k;++i){
                if(b[i]==a[j]){
                    ++cnt;
                }
            }
        }

        if(cnt==k) cnt=0;
        cout<<k-cnt<<endl;
    }



}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        solve();
        
    }
}
