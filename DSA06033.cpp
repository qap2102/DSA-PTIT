#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long


bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first<b.first) return true;
    if(a.first==b.first && a.second>b.second) return true;
    return false;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int> p[n];
        for(int i=0;i<n;++i){
            cin>>p[i].first;
            p[i].second=i;
        }
        sort(p,p+n,cmp);

        int kt=p[0].second;
        
        int tmp=INT16_MIN;

        for(int i=1;i<n;++i){
            tmp=max(tmp,p[i].second-kt);
            if(kt>p[i].second) kt=p[i].second;
        }

        cout<<tmp<<endl;

    }
}
