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



void sinh(){
    string s;
    cin>>s;
    int i=s.size()-1;
    while(i>=0&&s[i]=='1'){
        s[i]='0';
        --i;
    }
    if(i != -1) s[i] = '1';
    cout << s << endl;

}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        sinh();
    }
}