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
int a[25];
int n,x;
vector<int> v;
vector<vector<int>> vv;

void Try(int i){
    for(int j=i;j<n;++j){
        x-=a[j];
        v.push_back(a[j]);
        if(!x) vv.push_back(v);
        else if(x>0) Try(j);
        x+=a[j];
        v.pop_back();
    }
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        for(int i=0;i<n;++i) cin>>a[i];
        sort(a,a+n);
        v.clear();
        vv.clear();
        Try(0);
        if(vv.empty()) cout<<-1<<endl;
        else {
        	
		
        for(auto it:vv){
            cout<<"["<<it[0];
            for(int i=1;i<=it.size()-1;++i){
            	cout<<" "<<it[i];
                
            }
            cout<<"]";
        }
        cout<<endl;

    }
}

}

