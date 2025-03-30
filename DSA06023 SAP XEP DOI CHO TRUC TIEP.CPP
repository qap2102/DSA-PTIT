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
    faster
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i) cin>>a[i];
    for(int i=0;i<n-1;++i){
        bool kt=true;
        for(int j=i+1;j<n;++j){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
                kt=false;
            }
        }
        if(kt) return 0;
        cout<<"Buoc "<<i+1<<": ";
        for(int i=0;i<n;++i) cout<<a[i]<<" ";
        cout<<endl;
    }
    

}
