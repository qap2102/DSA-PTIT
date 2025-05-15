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
string s;

int tinhtong(int l,int m,int r){
    int sum=0;
    int lSum = INT16_MIN;
    int rSum = INT16_MIN;
    for(int i = m;i>=l;--i){
        sum+=a[i];
        if(sum>lSum) lSum = sum;
    }
    sum = 0;
    for(int i=m+1;i<=r;++i){
        sum+=a[i];
        if(sum>rSum) rSum = sum;
    }
    return lSum+rSum;
}

int check(int l, int r){
    if(l==r) return a[l];
    
    int m = (l+r)/2;
    int max1 = check(l,m);
    int max2 = check(m+1,r);
    int max3 = tinhtong(l,m,r);
    
    return max(max1, max(max2, max3));

}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        for(int i=0;i<n;++i) cin>>a[i];
        cout<<check(0,n-1)<<endl;

    }
}