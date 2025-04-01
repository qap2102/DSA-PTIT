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

int main(){
    faster;
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    int cnt=1;
    int i=0;
    while(i<n){
        if(i+1<n&&s[i]=='L'&&s[i+1]=='L'){
            ++cnt;
            i+=2;
        }
        else {
            ++cnt;
            ++i;
        }
        
    }
    cout<<min(cnt,n);

}