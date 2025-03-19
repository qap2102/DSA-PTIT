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

int n,k1,k2;

bool cmp(pair<int,int> a, pair<int,int> b){
	// fi luu gia co phieu
	// se luu ngay
	if(a.fi<b.fi) return true;
	if(a.fi==b.fi&&a.se<b.se) return true;
	return false;
}

bool cmp1(pair<int,int> a, pair<int,int> b){
	return a.se<b.se;
}

bool cmp2(pair<int,int> a, pair<int,int> b){
	return a.se>b.se;
}

int main(){
	faster;
	int t=1;
    while(1){
    	cin>>n>>k1>>k2;
    	if(!n&&!k1&&!k2) break;
    	
    	
    	vector<pair<int,int>> vp(N);
    	for(int i=0;i<n;++i){
    		cin>>vp[i].fi;
    		vp[i].se=i+1;
		}
    	sort(vp.begin(),vp.begin()+n,cmp);
    	sort(vp.begin(),vp.begin()+k1,cmp1);
    	sort(vp.begin()+(n-k2),vp.begin()+n,cmp2);
    	cout<<"Case "<<t<<endl;
    	
    	for(int i=0;i<k1;++i) cout<<vp[i].se<<" ";
    	cout<<endl;
    	for(int i=n-k2;i<n;++i) cout<<vp[i].se<<" ";
    	cout<<endl;
    	
    	++t;
	}
	
}


