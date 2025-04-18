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
string s,s1;
int c[12],e[12];


int dem(string a, int b[]){
    int siz = a.size()-1;
    int cnt=0;
    int tmp = siz;
    for(int i=tmp;i>=0;--i){
        if(a[siz]=='?'){
            b[i]=11;
            ++cnt;
        }
        else if(a[siz]=='#'){
            b[i]=12;
            
        }
        else b[i]=a[siz]-'0';
        --siz;
    }
    return cnt;
}
// 11 chỉ số ? và 12 chỉ số #

int main(){
    faster;
    cin>>s;
    cout<<dem(s,c);
}