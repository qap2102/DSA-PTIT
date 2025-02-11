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
    for(int i=n;i>=1;--i){
        cout<<a[i];
    }
    cout<<" ";
}

void sinh(int i){
    for(int j=n;j>=1;--j){
        if(!kt[j]){
            a[i]=j;
            kt[j]=1;
            if(i==1) in();
            else sinh(i-1);
            kt[j]=0;
        }
    }
}



int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        sinh(n);
        cout<<endl;
    }
    return 0;
}