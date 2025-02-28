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
        int n;
        cin>>n;
        int a[100005];
        map<int,int> mp;
        for(int i=0;i<n;++i){
        	cin>>a[i];
        	mp[a[i]]++;
        	
		}
		int kt=-1;
		
		for(int i=0;i<n;++i){
			if(mp[a[i]]>n/2){
				kt=a[i];
				break;
			}
		}
		if(kt!=-1) cout<<kt<<endl;
		else cout<<"NO"<<endl;
    }
}

