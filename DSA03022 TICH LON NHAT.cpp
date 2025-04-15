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
int a[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

int main(){
    faster;
    cin>>n;
    for(int i=0;i<n;++i) cin>>a[i];

    int duong=0;
    int am=0;
    for(int i=0;i<n;++i){
        if(a[i]>0) duong++;
        else if(a[i]<0) am++;
    }

    sort(a,a+n);
    if(duong>=3){
        cout<<max(a[n-1]*a[n-2]*a[n-3], a[n-1]*a[0]*a[1])<<endl;
    }
    else if(duong>=1){
        cout<<max(a[n-1]*a[0]*a[1], a[0]*a[1])<<endl;
    }
    else {
        cout<<max(max(a[n-1]*a[n-2], a[0]*a[1]), max(a[n-1]*a[n-2]*a[n-3], a[0]*a[1]*a[2]))<<endl;
    }


}