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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> vs(n);
        for(auto &i:vs){
            cin>>i;
        }
        stack<int> st;
        for(int i=n-1;i>=0;--i){
            if(isdigit(vs[i].back())){
                st.push(stoll(vs[i]));
            }
            else {
                ll x = st.top(); st.pop();
                ll y = st.top(); st.pop();
                
                if(vs[i]=="+"){
                    st.push(x+y);
                }
                else if(vs[i]=="-"){
                    st.push(x-y);
                }
                else if(vs[i]=="*"){
                    st.push(x*y);
                }
                else {
                    st.push(x/y);
                }

            }
        }
        cout<<st.top()<<endl;
    }
}