#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long



int main() {
    faster;
    int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;++i) cin>>a[i];
	vector<int> chan, le;
	for(int i=1;i<=n;++i){
		if(i&1) le.push_back(a[i]);
		else chan.push_back(a[i]);
	}
	sort(le.begin(),le.end());
	sort(chan.begin(),chan.end(),greater<int>());
	int demc=0, deml=0;
	for(int i=1;i<=n;++i){
		if(i&1) cout<<le[deml++]<<" ";
		else cout<<chan[demc++]<<" ";
	}
}

