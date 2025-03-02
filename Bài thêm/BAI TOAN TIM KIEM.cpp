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
        int n,s,k;
        cin>>n>>s>>k;
        int a[n+1], prefix[n+1];
        prefix[0]=0;
        for(int i=1;i<=n;++i){
        	cin>>a[i];
        	prefix[i]=prefix[i-1]+a[i];
		}
		int kt=-1;
		for(int i=1;i<=s;++i){
			if(prefix[s]-prefix[i-1]<=k){
				kt=i;
				break;
			}
			
		}
		cout<<kt<<endl;

    }
}
