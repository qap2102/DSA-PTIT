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
        int n,k;
        cin>>n>>k;
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;++i){
        	int x;
        	cin>>x;
        	mp[x]++;
		}
		if(mp[k]!=0) cout<<mp[k]<<endl;
		else cout<<-1<<endl;

    }
}
