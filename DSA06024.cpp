#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int main(){
    faster
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
    	cin>>a[i];
	}
	
	for(int i=0;i<n-1;++i){
		cout << "Buoc " << i+1 << ": ";
		int tmp=i;
		for(int j=i+1;j<n;++j){
			if(a[tmp]>a[j]){
				tmp=j;
			}
		}
		swap(a[i],a[tmp]);
		for(int k=0;k<n;++k){
			cout<<a[k]<<" ";
		}
		cout<<endl;
		
	}
	

}

