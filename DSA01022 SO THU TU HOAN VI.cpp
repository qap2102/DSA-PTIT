#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int n;
vector<int> a(n);

vector<int> b(n);
void solve(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];
        b[i]=i+1;
    }
    if(a==b){
        cout<<1<<endl;
    }
    else {
        int dem=1;
        while(b!=a){
            ++dem;
            next_permutation(b.begin(),b.end());
        }
        cout<<dem<<endl;
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
