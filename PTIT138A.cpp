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

int main(){
	faster;
	while(1){
		int a[5];
		cin>>a[0]>>a[1]>>a[2];
		if(!a[0]&&!a[1]&&!a[2]) break;
		sort(a,a+3);
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) cout<<"right"<<endl;
		else cout<<"wrong"<<endl;
	}
	
	
}


