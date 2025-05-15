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
    stack<ll> st;
    while(cin>>s){
        if(s=="push"){
            cin>>x;
            st.push(x);
        }
        else if(s=="pop"){
            st.pop();
        }
        else if(s=="show"){
            if(st.empty()) cout<<"empty"<<endl;
            else{
                stack<ll> tmp = st;
                vector<ll> ans;
                while(!tmp.empty()){
                    ans.push_back(tmp.top());
                    tmp.pop();
                }
                for(int i=ans.size()-1;i>=0;--i){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}