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

int main(){
    faster;
    while(1){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(!a&&!b&&!c&&!d) break;
        int cnt=0;
        while(a!=b||b!=c||c!=d||d!=a){
            int tmp1 = abs(a-b);
            int tmp2 = abs(b-c);
            int tmp3 = abs(c-d);
            int tmp4 = abs(d-a);
            a = tmp1;
            b = tmp2;
            c = tmp3;
            d = tmp4;
            ++cnt;
        }
        cout<<cnt<<endl;
    }
}