#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long



int main(){
    faster;
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i){
    	cin>>a[i];
	}
	sort(a,a+n);
	int cnt=1;
	for(int i=0;i<n;++i){
		if(a[i]-a[i-1]>k){
			++cnt;
		}
	}
	cout<<cnt;
	
}
