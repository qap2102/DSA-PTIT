#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int n,k,s;
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

int main(){
    faster;
    while(cin>>n>>k>>s){
        if(n==0 && k==0 && s==0) break;
        if(k>n){
            cout<<"0"<<endl;
            continue;
        }
        ktao();
        int cnt=0;
        kt=1;
        int sum;
        while(kt){
            sum=0;
            for(int i=1;i<=k;++i){
                sum+=a[i];

            }
            if(sum==s) cnt++;
            sinh();
        }
        cout<<cnt<<endl;
    }
}