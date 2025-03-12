#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        set<int> uni, inter;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            uni.insert(x);
        }
        for(int i=0;i<m;++i){
            int x;
            cin>>x;
            if(uni.find(x)!=uni.end()){
                inter.insert(x);
            }
            uni.insert(x);
        }
        for(auto x:uni){
            cout<<x<<" ";
        }
        cout<<endl;
        for(auto x:inter){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}