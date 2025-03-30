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
const int N=1e5+5;

int x;
string s;

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>x>>s;
        cout<<x<<" ";
        if(!next_permutation(s.begin(),s.end())){
            cout<<"BIGGEST"<<endl;
        }
        else cout<<s<<endl;
    }
}