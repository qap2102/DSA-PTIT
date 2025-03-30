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

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=s.size()-1;
        
        while(s[i]=='0'&&i>=0){
            s[i]='1';
            --i;
        }
        if(i!=-1) s[i]='0';
        cout<<s<<endl;
    }
}