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
ll a[N], b[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

void Try(int i, int sum, vector<int> v1){
    for(int j=i+1;j<n;++j){
        sum+=a[j];
        v1.push_back(a[j]);
        if(sum&1) vv.push_back(v1);
        Try(j,sum,v1);
        sum-=a[j];
        v1.pop_back();
    }
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        v.clear();
        vv.clear();
        cin>>n;
        for(int i=0;i<n;++i) cin>>a[i];
        sort(a,a+n, greater<int>());
        Try(-1,0,v);
        sort(vv.begin(),vv.end());
        
        for(auto it:vv){
            for(int k:it){
                cout<<k<<" ";
            }
            cout<<endl;
        }
    }
}