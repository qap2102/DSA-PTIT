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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vector<string> v;
        for(int i=0;i<n;++i) cin>>a[i];
        for(int i=0;i<n-1;++i){
            bool kt=true;
            for(int j=0;j<n-i-1;++j){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    kt=false;
                }
            }
            if(kt)  break;
            string s="";
            for(int k=0;k<n;++k){
                s+=(to_string(a[k])+" ");
            }
            v.push_back(s);
            
            
        }
        for(int i=v.size()-1;i>=0;--i){
            cout << "Buoc " << i + 1 << ": " << v[i] << endl;
        }
    }
}
