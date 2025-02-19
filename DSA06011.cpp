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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i) cin>>a[i];
        int ans=INT16_MAX;
        int tmp=0;
        for(int i=0;i<n-1;++i){
            for(int j=i+1;j<n;++j){
                if(ans>abs(a[i]+a[j])){
                    ans=abs(a[i]+a[j]);
                    tmp=a[i]+a[j];
                }
            }
        }
        cout<<tmp<<endl;
    }
}