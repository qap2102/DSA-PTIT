#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
            v.push_back(a[i]);
        }
		
		int b[m];
        for(int i=0;i<m;++i){
            cin>>b[i];
            v.push_back(b[i]);
        }
        sort(v.begin(),v.end());

        for(auto it:v) cout<<it<<" ";
        cout<<endl;

    }
}
