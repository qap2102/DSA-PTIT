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

ll t,n,x,k;
ll a[N], b[N], c[N];
vector<ll> v;
vector<vector<ll>> vv;

string s,s1;

int main(){
    faster;
    while(1){
        getline(cin,s);

        if(s==".") break;
        stack<char> st;
        int kt=1;
        for(int i=0;i<s.size();++i){
            if(s[i]=='('||s[i]=='[') st.push(s[i]);
            else if(s[i]==')'||s[i]==']'){
                if(st.empty()){
                    kt=0;
                    break;
                }
                if(s[i]==')'&& st.top()=='(' || s[i] == ']' && st.top() == '[') st.pop();
                else {
                    kt=0;
                    break;
                }
            }
        }
        if(!st.empty()) kt=0;

        if(kt) cout<<"yes"<<endl;
        else cout<<"no"<<endl;

    }
}