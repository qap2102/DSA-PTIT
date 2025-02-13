#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int n,k;
string s;
vector<string> v;

bool check(string s){
    int cnt=0;
    bool kt = false;
    for(char x:s){
        if(x=='A'){
            ++cnt;
        }
        else cnt=0;
        if(cnt==k){
            if(kt) return false;
            kt=true;
        }
        if(cnt>k) return false;
    }
    return kt;
}

void Try(int i){
    for(int j='A';j<='B';++j){
        s+=j;
        if(i==n){
            if(check(s)) v.push_back(s);
        }
        else Try(i+1);
        s.pop_back();
    }
}

int main(){
    faster;
    cin>>n>>k;
    s="";
    Try(1);
    cout<<v.size()<<endl;
    for(string x:v){
        cout<<x<<endl;
    }
    
}