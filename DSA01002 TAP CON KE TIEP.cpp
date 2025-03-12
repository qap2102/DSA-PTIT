#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int n,k;
int a[10005];


void sinh(){
    cin>>n>>k;
    for(int i=1;i<=k;++i){
        cin>>a[i];
    }
    int i=k;
    while(a[i]==n-k+i&&i>=1){
        i--;
    }
    if(i!=0){
        a[i]++;
        for(int j=i+1;j<=k;++j){
            a[j]=a[j-1]+1;
        }
        for(int i=1;i<=k;++i){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else if(i==0){
        for(int i=1;i<=k;++i){
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