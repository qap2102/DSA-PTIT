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

bool cmp(pair<int,int> a, pair<int,int> b){
	// fi lưu giá trị, se lưu vị trí
	if(a.fi<b.fi) return true;
	if(a.fi==b.fi&&a.se>b.se) return true;
	return false;
}

int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		pair<int,int> p[n];
		for(int i=0;i<n;++i){
			cin>>p[i].fi;
			p[i].se=i;
		}
		sort(p,p+n,cmp);
		int kt=p[0].se;
        
        int tmp=INT16_MIN;

        for(int i=1;i<n;++i){
            tmp=max(tmp,p[i].se-kt);
            if(kt>p[i].se) kt=p[i].se;
        }

        cout<<tmp<<endl;
	}
	
	
}


