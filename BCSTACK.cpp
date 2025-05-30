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
const int N=505;

string s;
int x;

stack<int> st;


int main(){
    faster;
    while(1){
        cin>>s;
        if(s=="end") break;
        else if(s=="init") st = stack<int>();
        else if(s=="empty"){
            if(st.empty()) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else if(s=="push"){
            cin>>x;
            st.push(x);
        }
        else if(s=="pop"){
            if(!st.empty()) st.pop();
        }
        else if(s=="top"){
            if(st.empty()) cout<<-1<<endl;
            else cout<<st.top()<<endl;
        }
        else if(s=="size") cout<<st.size()<<endl;
    }
}