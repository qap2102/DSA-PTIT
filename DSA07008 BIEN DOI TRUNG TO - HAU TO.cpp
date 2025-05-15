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
ll a[N], b[N], c[N*2];
vector<ll> v;
vector<vector<ll>> vv;
bool kt = false;
string s1;

int Priority(char c){
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 2;
    if(c=='^') return 3;
    return -1;
}

void cal(string s){
    stack<char> st;
    string out = "";
    for(int i=0;i<s.size();++i){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(isalnum(s[i])) out+=s[i];
        else if(s[i]==')'){
            while(!st.empty()&&st.top()!='('){
                char c = st.top();
                st.pop();
                out += c;
            }
            st.pop();
        }
        else {
            while(!st.empty()&&Priority(s[i])<=Priority(st.top())){
                char c = st.top();
                st.pop();
                out += c;
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        char c = st.top();
        if(c!='('){
            out +=c;
        }
        st.pop();
    }
    cout<<out;
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        cal(s);
        cout<<endl;
        
    }
}