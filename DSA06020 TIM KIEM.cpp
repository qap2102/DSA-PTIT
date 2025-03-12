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
        int kt=0;
        for(int i=0;i<n;++i){
        	cin>>a[i];
        	
        	
		}
		for(int i=0;i<n;++i){
			if(a[i]==k) kt=1;
		}
		if(kt==1) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
		

    }
}
