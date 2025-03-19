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
int n;
double a[N], b[N];
int c[N];

void sol1(){
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i]>>b[i];
		c[i]=1;
	}
	for(int i=0;i<n;i++){
			for(int j = 0;j<i;j++){
				if(a[j]<a[i]&&b[j]>b[i]) c[i] = max(c[i], c[j]+1);
			}
		}
	cout<<*max_element(c,c+n)<<endl;
}

int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		sol1();
		
	}

	
}



