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

int a[100005];


int main(){
    faster;
    int s,n;
    cin>>s>>n;
    ll sum=0;
    for(int i=0;i<n;++i){
        cin>>a[i];
        sum+=a[i];
    }

    int f[sum+1]={};
    f[0]=1;
    for(int i=0;i<n;++i){
        for(int j=sum;j>=a[i];--j){
            if(f[j-a[i]]) f[j]=a[i];
        }
    }

    for(int i=s;i>=0;--i){
        if(f[i]){
            cout<<i<<endl;
            break;
        }
    }
}