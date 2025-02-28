#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int a[50], n;

void in(int n){
	cout<<"(";
	for(int i=1;i<n;++i){
		cout<<a[i]<<" ";
	}
	cout<<a[n]<<") ";
}
void Try(int x, int i, int sum){
	for(int j=x;j>=1;--j){
		a[i]=j;
		if(j==sum) in(i);
		else if(j<sum) Try(j,i+1,sum-j);
	}
}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        Try(n,1,n);
        cout<<endl;
    }
}
