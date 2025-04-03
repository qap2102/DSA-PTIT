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

int n,p,s;
vector<int> a; // lưu các số nguyên tố của trong  (p,s]
vector<int> b; // lưu để kiểm tra số lượng có bằng n không
vector<vector<int>> c;

bool nt(int n){
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0) return false;
    }
    return n>1;
}

void Try(int i){
    for(int j=i;j<a.size();++j){
        s-=a[j];
        b.push_back(a[j]);
        if(b.size()==n){
            if(!s) c.push_back(b);
        }
        else if(s>0) Try(j+1);
        s+=a[j];
        b.pop_back();
    }
}






int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>p>>s;
        a.clear();
        for(int i=p+1;i<=s;++i){
            if(nt(i)) a.push_back(i);
        }
        if(a.empty()) cout<<0<<endl;
        else {
            b.clear();
            c.clear();
            Try(0);
            cout<<c.size()<<endl;
            for(auto x:c){
                for(int y:x){
                    cout<<y<<" ";
                }
                cout<<endl;
            }
        }

    }
}