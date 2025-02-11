#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int n;
int a[10005];

bool kt[15]={0};

void in(){
    for(int i=1;i<=n;++i){
        cout<<(char)(a[i]+'A'-1);
    }
    cout<<" ";
}

void sinh(int i){
    for(int j=1;j<=2;++j){
        a[i]=j;
        if(i==n) in();
        else sinh(i+1);
    }
}



int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        sinh(1);
        cout<<endl;
    }
    return 0;
}