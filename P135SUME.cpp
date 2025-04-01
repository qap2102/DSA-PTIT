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
    int a[8];
    for(int i=1;i<=8;++i) cin>>a[i];
    int cnt=0;
    for(int i=1;i<=7;++i){
        if(a[i]<a[i+1]) ++cnt;
        else --cnt;
    }
    if(cnt==7) cout<<"ascending"<<endl;
    else if(cnt==-7) cout<<"descending"<<endl;
    else cout<<"mixed"<<endl;
}