#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long


int n,x;
pair<int,int> p[100005];

bool cmp(pair<int,int> a, pair<int,int> b){

    // first lưu giá trị  phần tử, second lưu vị trí xuất hiện
    if(abs(a.first-x)<abs(b.first-x)) return true;
    if(abs(a.first-x)==abs(b.first-x)&&a.second<b.second) return true;
    return false;

}


int main(){
    faster
    int t;
    cin>>t;
    while(t--){
        
        cin>>n>>x;
        for(int i=0;i<n;++i){
            cin>>p[i].first;
            p[i].second=i;
        }
        sort(p,p+n,cmp);
        for(int i=0;i<n;++i){
            cout<<p[i].first<<" ";
        }
        cout<<endl;
        

    }
}
