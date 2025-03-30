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

int n,k;
vector<int> v;
set<int> se;
int kt;
int a[35];

void ktao(int k){
    for(int i=1;i<=k;++i){
        a[i]=i;
    }
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		kt = 0;
	}
	else {
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

int main(){
    faster;
    cin>>n>>k;
    kt=1;
    int b[n+1];
    for(int i=1;i<=n;++i){
        cin>>b[i];
        se.insert(b[i]);
    }

    for(int x:se){
        v.push_back(x);
    }
    n=se.size();
    ktao(k);
    while(kt){
        for(int i=1;i<=k;++i){
            cout<<v[a[i]-1]<<" ";
        }
        cout<<endl;
        sinh();
    }
}