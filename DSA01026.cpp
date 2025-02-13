#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

string s;
int n;
string a="68";

bool check(){
    if (s[0]=='6') return false;
    if (s.back()=='8') return false;
    int dem1 = 0;
    int dem2 = 0;
    for(char i : s){
        if(i=='6'){
            ++dem1;
            dem2=0;
        }
        else if(i=='8'){
            ++dem2;
            dem1=0;
        }
        if(dem1>3 || dem2>1) return false;
    }
    return true;
}

void solve(int i){
    for(int j=0;j<2;++j){
        s=s+a[j];
        if(i==n){
            if(check()) cout<<s<<endl;
        }
        else solve(i+1);
        s.pop_back();
    }
}

int main(){
    faster;
    cin>>n;
    
    solve(1);
}   