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
const int N=1e5+5;


ll n,q , a[200000], bit[200000];

void update(int pos, int val){
	// pos -> n:pos +=pos &(-pos)
	for(; pos<=n;pos+=pos&(-pos)){
		bit[pos]+=val;
	}
}

ll query(int pos){
	int sum=0;
	for(; pos>=1;pos-=pos&(-pos)){
		sum+=bit[pos];
	}
	return sum;
}
int main(){
	faster;
	cin>>n>>q;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		update(i,a[i]);
	}
	while(q--){
		int tt, x, y;
		cin>>tt>>x>>y;
		if(tt==1){
			update(x,y);
		}
		else cout<<query(y)-query(x-1)<<endl;
	}

	
}



