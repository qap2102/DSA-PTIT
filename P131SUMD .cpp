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

int maxx(string a, string b){
    for(int i=0;i<a.size();++i){
        if(a[i]=='5'){
            a[i]='6';
        }
    }
    for(int i=0;i<b.size();++i){
        if(b[i]=='5'){
            b[i]='6';
        }
    }
    return atoi(a.c_str())+atoi(b.c_str());
}
int minn(string a, string b){
    for(int i=0;i<a.size();++i){
        if(a[i]=='6'){
            a[i]='5';
        }
    }
    for(int i=0;i<b.size();++i){
        if(b[i]=='6'){
            b[i]='5';
        }
    }
    return atoi(a.c_str())+atoi(b.c_str());
}

int main(){
    faster;
    int a,b;
    cin>>a>>b;
    string a1=to_string(a);
    string b1=to_string(b);
    cout<<minn(a1,b1)<<" "<<maxx(a1,b1)<<endl;

}