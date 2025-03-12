#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int main(){
    int n;
    cin>>n;
    int l=(n+1)/2;
    vector<int> v(l,0);
    while(1){
        for(int i=0;i<l;++i){
            cout<<v[i]<<" ";
        }
        for(int i=l-1;i>=0;--i){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        int j=l-1;
        while(j>=0&&v[j]==1){
            v[j]=0;
            --j;
        }
        if(j<0) break;
        v[j]=1;
    }
}