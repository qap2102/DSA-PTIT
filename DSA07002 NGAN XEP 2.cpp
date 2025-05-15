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


stack<ll> st;
int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        
        if(s=="PUSH"){
            cin>>x;
            st.push(x);
        }
        else if(s=="POP"){
            if(!st.empty()) st.pop();
        }
        else if(s=="PRINT"){
            if(st.empty()) cout<<"NONE"<<endl;
            else cout<<st.top()<<endl;
        }
    }
}