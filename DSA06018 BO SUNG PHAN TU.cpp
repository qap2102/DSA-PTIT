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

int n,x;


int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		map<int,int> mp;
		int r = INT_MIN;
		int l = INT_MAX;
		for(int i=0;i<n;++i){
			cin>>x;
			mp[x]=1;
			l=min(l,x);
			r=max(r,x);
		}
		ll cnt=0;
		for(int i=l;i<=r;++i){
			if(!mp[i]) ++cnt;
		}
		cout<<cnt<<endl;
	}
	
	
}


