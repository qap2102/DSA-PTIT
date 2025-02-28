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
    vector<int> chan, le;
    for(int i=0;i<n;++i){
    	cin>>a[i];
    	if(i%2==0){
    		chan.push_back(a[i]);
		}
		else {
			le.push_back(a[i]);
		}
	}
	sort(chan.begin(),chan.end());
	sort(le.begin(),le.end(),greater<int>());
	int demc=0,deml=0;
	for(int i=0;i<n;++i){
		if(i%2==0){
			cout<<chan[demc++]<<" ";
		}
		else {
			cout<<le[deml++]<<" ";
		}
	}
}

