#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
	faster;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
}
