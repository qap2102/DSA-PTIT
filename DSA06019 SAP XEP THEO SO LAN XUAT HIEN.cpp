#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long


bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second!=b.second) return a.second > b.second;
	return a.first < b.first;
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        int a[n];
        for(int i=0;i<n;++i){
        	cin>>a[i];
        	mp[a[i]]++;
		}
		vector<pair<int,int>> vp;
		for(int i=0;i<n;++i){
			if(mp[a[i]]){
//				auto p = make_pair(a[i],mp[a[i]]);
				vp.push_back(make_pair(a[i],mp[a[i]]));
				mp[a[i]]=0;
			}
		}
		
		sort(begin(vp), end(vp), cmp);
		for(auto x : vp){
			for(int j=0;j<x.second;++j){
				cout<<x.first<<" ";
			}
		}
		cout<<endl;
    }
}
