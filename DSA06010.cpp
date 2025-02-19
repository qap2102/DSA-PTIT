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
        int n;
        cin>>n;
        vector<string> a(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        set<char> s;
        for(auto it:a){
            for(char x:it){
                s.insert(x);
            }
        }
        for(auto it:s){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}