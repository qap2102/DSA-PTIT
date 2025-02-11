#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int n,k;
// vector<int> a(k+1);
// vector<int> b(k+1);
int a[10005], b[10005];

bool check(){
    for(int i=1;i<=k;++i){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

void solve(){
    cin>>n>>k;
    for(int i=1;i<=k;++i){
        cin>>a[i];
        b[i]=i;
    }
    int dem=1;
    while(1){
        if(check()) break;
        int tmp=k;
        while(b[tmp]==n-k+tmp) --tmp;
        b[tmp]++;
        for(int i=tmp+1;i<=k;++i){
            b[i]=b[i-1]+1;
        }
        ++dem;
        
    }
    cout<<dem<<endl;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
