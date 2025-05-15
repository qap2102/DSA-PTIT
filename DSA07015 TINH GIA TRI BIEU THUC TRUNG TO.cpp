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

int Priority(char c){
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 2;
    return 0;
}

ll calc(ll a, ll b, char c){
    if(c=='+') return a+b;
    if(c=='-') return a-b;
    if(c=='*') return a*b;
    if(c=='/') return a/b;
}



ll cal(string s){
    stack<ll> stl; // lưu trữ toán hạng
    stack<char> stc; // lưu trữ toán tử
    for(int i=0;i<s.size();++i){
        if(s[i]=='(') stc.push(s[i]);
        else if(s[i]==')'){
            // xử lý phần biểu thức trong ngoặc
            while(!stc.empty() && stc.top() != '('){
                ll a = stl.top();
                stl.pop();
                ll b = stl.top();
                stl.pop();
                char c = stc.top();
                stc.pop();
                stl.push(calc(b, a, c));

            }
            if(!stc.empty()) stc.pop(); // bỏ ngoặc trái
        }

        else if(isdigit(s[i])){
            // phát hiện số
            ll num = 0;
            while(i < s.size() && isdigit(s[i])){
                num = num * 10 + (s[i] - '0');
                i++;
            }
            stl.push(num);
            --i;
        }
        else {
            // xử lý khi gặp toán tử
            while(!stc.empty() && Priority(stc.top()) >= Priority(s[i])){
                ll a = stl.top();
                stl.pop();
                ll b = stl.top();
                stl.pop();
                char c = stc.top();
                stc.pop();
                stl.push(calc(b, a, c));
            }
            stc.push(s[i]);
        }
    }
    while(!stc.empty()){
        ll a = stl.top();
        stl.pop();
        ll b = stl.top();
        stl.pop();
        char c = stc.top();
        stc.pop();
        stl.push(calc(b, a, c));
    }

    return stl.top();
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