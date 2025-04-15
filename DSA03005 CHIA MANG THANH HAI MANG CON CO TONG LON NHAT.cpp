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
const int N=1e6+5;

int t,n,x;
int a[55];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>x;
        for(int i=0;i<n;++i) cin>>a[i];
        sort(a,a+n);

        int k = min(x,n-x);
        ll sum=0;
        ll sum1=0;

        for(int i=0;i<k;++i){
            sum += a[i];
        }
        for(int i=k;i<n;++i){
            sum1 += a[i];
        }
        cout<<sum1-sum<<endl;
    }
}