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
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        ll a[n1], b[n2], c[n3];
        for(int i=0;i<n1;++i) cin>>a[i];
        for(int i=0;i<n2;++i) cin>>b[i];
        for(int i=0;i<n3;++i) cin>>c[i];
        vector<ll> v;
        int x=0,y=0,z=0;
        while(x<n1&&y<n2&&z<n3){
            if(a[x]==b[y]&&b[y]==c[z]){
                v.push_back(a[x]);
                x++;
                y++;
                z++;

            }
            else if(a[x]<b[y]) ++x;
            else if(b[y]<c[z]) ++y;
            else z++;
        }
        if(!v.size()) cout << "-1";
        else {
        
        for(int i = 0; i < v.size(); i++) {
        
            cout << v[i];
            if(i != v.size() - 1) cout <<" ";
            }
        }
        cout << "\n";


    }
}
