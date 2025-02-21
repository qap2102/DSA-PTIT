#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int main(){
    faster
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> se;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            se.insert(x);
        }
        if(se.size()<2) cout<<-1<<endl;
        else{
            auto it=se.begin();
            cout<<*it<<" ";
            it++;
            cout<<*it<<endl;
        }
        se.clear();
    }
}
