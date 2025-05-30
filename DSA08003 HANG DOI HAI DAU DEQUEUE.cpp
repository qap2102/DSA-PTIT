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

ll t,n,x,k;
ll a[N][N], b[N], c[N];
vector<ll> v;
vector<vector<ll>> vv;
bool kt = false;
string s,s1;

deque<ll> q;

int main(){
    faster;
    cin>>t;
    while(t--){
        cin>>s;
        if(s=="PUSHFRONT"){
            cin>>x;
            q.push_front(x);
        }
        else if(s=="PUSHBACK"){
            cin>>x;
            q.push_back(x);
        }
        else if(s=="PRINTFRONT"){
            if(q.empty()) cout<<"NONE"<<endl;
            else cout<<q.front()<<endl;
        }
        else if(s=="POPFRONT"){
            if(!q.empty()) q.pop_front();
        }
        else if(s=="POPBACK"){
            if(!q.empty()) q.pop_back();
        }
        else if(s=="PRINTBACK"){
            if(q.empty()) cout<<"NONE"<<endl;
            else cout<<q.back()<<endl;
        }
    }
}