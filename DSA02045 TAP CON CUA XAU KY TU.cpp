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

int t,n,x;
ll a[N], b[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s;

void Try(int i, string s1){
    for(int j=i+1;j<s.size();++j){
        s1+=s[j];
        cout<<s1<<" ";
        Try(j,s1);
        s1.pop_back();
    }
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>s;
        Try(-1,"");
        cout<<endl;
    }
}