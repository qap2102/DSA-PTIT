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
int a[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        map<char, int> mp;
        for(int i=0;i<s.size();++i){
            mp[s[i]]++;
        }
        x = s.size();
        if(x%n==0) x = x/n;
        else x = (x/n)+1;

        kt = false;
        for(int i=0;i<s.size();++i){
            if(mp[s[i]]>x){
                kt = true;
                break;
            }
            else mp[s[i]]=0;
        }
        if(!kt) cout<<1<<endl;
        else cout<<-1<<endl;
    }
}