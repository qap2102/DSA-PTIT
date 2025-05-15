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
string s, s1;



int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        kt = false;
        stack<char> st;
        for(int i=0;i<s.size();++i){
            if(s[i]==')'){
                int check = 0;
                while(!st.empty()&&st.top()!='('){
                    if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/'){
                        check = 1;
                    }
                    st.pop();
                }
                if(st.top()=='(') st.pop();
                if(!check){
                    kt=true;
                    break;
                }
            }
            else if(s[i]!=' ') st.push(s[i]);

        }
        if(!kt) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}