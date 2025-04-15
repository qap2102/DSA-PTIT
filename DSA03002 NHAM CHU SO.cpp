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
const int N=1e6+5;

int t,n,x;
int a[35];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

int doi1(string s){
    for(int i=0;i<s.size();++i){
        if(s[i]=='5') s[i]='6';
        
    }
    return stoi(s); // tìm max
}
int doi2(string s){
    for(int i=0;i<s.size();++i){
        if(s[i]=='6') s[i]='5';
        
    }
    return stoi(s); // tìm min
}

int main(){
    faster;
    string a, b;
    cin>>a>>b;
    
    // xét trường hợp cả 2 lên 6;
    int a1 = doi1(a);
    int b1 = doi1(b);
    // cout<<a1+b1;

    // xét trường hợp cả 2 xuống 5;
    int a2 = doi2(a);
    int b2 = doi2(b);
    cout<<1ll*(a2+b2)<<" "<<1ll*(a1+b1);

    
    
    
    
}