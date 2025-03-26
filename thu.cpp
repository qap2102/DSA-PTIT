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
const int N=1e5+5;


int a[N],b[N],c[N];
int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;++i) cin>>a[i];
		b[1]=a[1];
		c[n]=a[n];
		for(int i=2;i<=n;++i) b[i]=max(b[i-1],a[i]);
		for(int i=n-1;i>=1;--i) c[i]=min(c[i+1],a[i]);
		vector<int> v;
		for(int i=1;i<=n-1;++i){
			if(b[i]<=c[i+1]) v.push_back(i);
		}
		cout<<v.size()<<endl;
		for(auto x:v) cout<<x<<" ";
		cout<<endl;
		v.clear();
		
		
		
	}

	
}



