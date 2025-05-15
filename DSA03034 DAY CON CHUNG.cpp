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

int t,n,x,k;
ll a[N], b[N], c[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s;

int main(){
	faster;
	cin>>t;
    cin.ignore();
	while(t--){
        v.clear();
		cin>>n>>x>>k;
        for(int i=0;i<n;++i) cin>>a[i];
        for(int i=0;i<x;++i) cin>>b[i];
		for(int i=0;i<k;++i) cin>>c[i];
        int i=0,j=0,z=0;
        while(i<n&&j<x&&z<k){
            if(a[i]==b[j]&&b[j]==c[z]){
                v.push_back(a[i]);
                ++i;
                ++j;
                ++z;
            }
            else if(a[i]<b[j]) ++i;
            else if(b[j]<c[z]) ++j;
            else ++z;
        }
        if(!v.size()) cout<<"NO"<<endl;
        else {
            for(auto it:v) cout<<it<<" ";
            cout<<endl;
        }

		
	}

	
}



