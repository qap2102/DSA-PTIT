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
        int n;
        cin>>n;
        int l=INT16_MAX;
        int r=INT16_MIN;
        int x;
        set<int> se;
        for(int i=0;i<n;++i){
            cin>>x;
            se.insert(x);
            l=min(l,x);
            r=max(r,x);
        }
        cout<<r-l+1-se.size()<<endl;
        se.clear();
    }
}
