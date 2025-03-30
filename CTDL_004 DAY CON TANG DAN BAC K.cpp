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
int a[1005], b[1005];
int kt;




void ktao(){
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

bool check(int b[]){
    for(int i=1;i<k;++i){
        if(b[a[i]] > b[a[i+1]]) return false;

    }
    return true;
}

int main(){
    faster;
    cin>>n>>k;
    ktao();
    for(int i=1;i<=n;++i){
        cin>>b[i];
    }
    int cnt=0;
    kt=1;
    while(kt){
        if(check(b)){
            ++cnt;
        }
        sinh();
    }
    cout<<cnt<<endl;
}