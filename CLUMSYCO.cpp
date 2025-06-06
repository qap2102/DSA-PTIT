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

int main(){
    faster;
    string s;
    cin>>s;
    int cnt=0;
    stack<char> st;
    for(int i=0;i<s.size();++i){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.empty()) ++cnt;
            else st.pop();
        }
    }
    int k=0;
    if(cnt%2==0) k = st.size()/2 + cnt/2;
    else k = st.size()/2 +cnt/2 + 2;
    cout<<k<<endl;
}