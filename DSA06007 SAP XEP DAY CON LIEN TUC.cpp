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
        vector<int> a,b;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            a.push_back(x);
            
        }
        b=a;
        sort(a.begin(), a.end());
        int l=0;
        while(a[l]==b[l]){
            l++;
        }
        int r=n-1;
        while(a[r]==b[r]){
            r--;
        }
        cout<<l+1<<" "<<r+1<<endl;

    }
}