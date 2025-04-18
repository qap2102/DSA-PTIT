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

ll t,n,x;
ll a[N], b[N];
vector<ll> v;
vector<vector<int>> vv;
bool kt = false;
string s;
vector<string> vs;

void init(){
    for(int i=100;i>=1;--i){
        vs.push_back(to_string(i*i*i));
    }
}

bool check(string s1){
    int j =0 ;
    for(char i:s){
        if(i==s1[j]) ++j;
        if(j==s1.size()) return true;
    }
    return false;
}


int main(){
    faster;
    init();
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        string tmp = "-1";
        for(int i=0;i<vs.size();++i){
            if(vs[i].size()<s.size()){
                if(check(vs[i])){
                    tmp = vs[i];
                    break;
                }
            }
        }
        cout<<tmp<<endl;
        // cout<<vs.size()<<endl;
    }
}