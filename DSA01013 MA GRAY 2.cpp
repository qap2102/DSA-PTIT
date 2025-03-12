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
        string s;
        cin>>s;
        string nhiphan="";
        nhiphan = s[0];
        for(int i=1;i<s.size();++i){
            int n=nhiphan.size()-1;
            if(nhiphan[n] != s[i]) nhiphan +="1";
            else nhiphan +="0";
        }
        cout<<nhiphan<<endl;
    }
}