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
pair<int,int> p[N];

bool cmp(pair<int,int> a, pair<int,int> b){
	
	if(abs(x-a.fi)<abs(x-b.fi)) return true;
	if(abs(x-a.fi)==abs(x-b.fi)&&a.se<b.se) return true;
	return false;
}

int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=0;i<n;++i){
			cin>>p[i].fi;
			p[i].se=i;
		}
		sort(p,p+n,cmp);
		for(int i=0;i<n;++i) cout<<p[i].fi<<" ";
		cout<<endl;
	}
	
	
}


