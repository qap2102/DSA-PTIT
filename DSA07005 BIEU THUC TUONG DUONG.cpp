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
bool kt = false;
string s,s1;

string cal(string s){
    stack<char> st;
    for(int i=0;i<s.size();++i){
        if(s[i]!=')') st.push(s[i]);
        else {
            
            stack<char> st1;
            while(!st.empty()&&st.top()!='('){
                
                st1.push(st.top());
                st.pop();
            }
            st.pop();

            if(!st.empty()&&st.top()=='-'){
                while(!st1.empty()){
                    if(st1.top()=='+') st.push('-');
                    else if(st1.top()=='-') st.push('+');
                    else st.push(st1.top());
                    st1.pop();
                }
            }
            else {
                while(!st1.empty()){
                    st.push(st1.top());
                    st1.pop();
                }

            }
        }
    }
    string out ="";
    while(!st.empty()){
        out += st.top();
        st.pop();
    }
    reverse(out.begin(),out.end());
    return out;
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        cout<<cal(s)<<endl;
    }
}