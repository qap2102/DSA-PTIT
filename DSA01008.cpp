#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int n,k;
int a[10005];

int cnt=0;
bool kt[15]={0};

void in(){
    for(int i=1;i<=n;++i){
        cout<<a[i];
    }
    cout<<endl;
}

void sinh(int i){
    for(int j=0;j<=1;++j){
        a[i]=j;
        if(i==n){
            cnt=0;
            for(int i=1;i<=n;++i){
                cnt+=a[i];

            }
            if(cnt==k) in();
        }
        else sinh(i+1);
    }
}



int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        sinh(1);
        // cout<<endl;
    }
    return 0;
}