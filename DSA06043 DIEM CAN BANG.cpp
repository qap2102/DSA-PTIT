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


int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        int a[N],prefix[N];
        prefix[0]=0;
        for(int i=1;i<=n;++i){
            cin>>a[i];
            prefix[i]=prefix[i-1]+a[i];
        }
        int tmp=-1;
        for(int i=1;i<=n;++i){
            if(prefix[i-1]+prefix[i]==prefix[n]){
                tmp=i;
                break;
            }
        }
        cout<<tmp<<endl;
	}
}