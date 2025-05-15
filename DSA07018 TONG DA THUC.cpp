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

map<ll,ll> mp;

void cal(string s){
    s+=" ";
    ll heso =0;
    ll mu=0;
    ll dau=0;
    for(int i=0;i<s.size();++i){
        if(isdigit(s[i])){
            if(dau==0) heso = heso*10 + (s[i]-'0');
            else if(dau==1) mu = mu*10 + (s[i]-'0');
        }
        else if(s[i]=='^') dau=1;
        else if(s[i]==' '){
            mp[mu] += heso;
            heso=0;
            mu=0;
            dau=0;
        }
    }
}

vector<pair<ll,ll>> vp;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        getline(cin,s1);
        mp.clear();
        vp.clear();
        cal(s);
        cal(s1);

        for(auto it:mp){
            vp.push_back(it);
        }

        for(int i=vp.size()-1;i>0;--i){
            cout<<vp[i].se<<"*x^"<<vp[i].fi<<"+";
        }
        cout<<vp[0].se<<"*x^"<<vp[0].fi<<endl;
    }
}