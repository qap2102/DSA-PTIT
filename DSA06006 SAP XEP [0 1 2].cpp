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
        int n;
        cin>>n;
        multiset<int> ms;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            ms.insert(x);
        }
        for(auto i:ms){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}