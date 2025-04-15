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
// int a[25] 
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        
        cin>>n;
        int a[n+5]={};
        for(int i=0;i<n;++i) cin>>a[i];

        sort(a,a+n, greater<int>());
        int mu = 1;
        ll sum=0;

        for(int i=0;i<n;i+=2){
            sum +=(a[i]+a[i+1])*mu;
            mu*=10;
        }
        cout<<sum<<endl;
    }
}
// bài này không khai báo được mảng toàn cục:)))