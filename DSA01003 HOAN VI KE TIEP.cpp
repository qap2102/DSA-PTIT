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

int n;
int a[10005];


void sinh(){
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    int i=n-1;
    while(a[i]>a[i+1]&&i>=0){
        --i;
    }
    if(i!=0){
        int j=n;
        while(a[j]<a[i]){
            --j;
        }
        swap(a[j],a[i]);
        reverse(a+i+1,a+n+1);
        for(int i=1;i<=n;++i){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    else {
        for(int i=1;i<=n;++i){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        sinh();
    }
}