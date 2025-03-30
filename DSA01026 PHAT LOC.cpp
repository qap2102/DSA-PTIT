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




int n,k,s;
int a[35], b[1005];
int kt=1;


void ktao(int n){
    for(int i=1;i<=n;++i){
        a[i]=6;
    }
}

void sinh(){
	int i = n;
    while(a[i] == 8 && i >= 1) {
        a[i] = 6;
        i--;
    }
    if(i == 0) kt = 0;
    else a[i] = 8;
}

bool check(int a[]){
    for(int i=1;i<=n-3;++i){
    	if((a[i] == a[i+1] && a[i] == 8) || (a[i] == a[i+1] && a[i+1] == a[i+2] && a[i+2] == a[i+3] && a[i] == 6)) return false;
    	
	}
	if((a[n-2] == a[n-1] && a[n-2] == 8) || (a[n-1] == a[n] && a[n] == 8)) return false;
    return (a[1] == 8 && a[n] == 6);
}



int main(){
    faster;
    cin>>n;
    ktao(n);
    while(kt){
    	if(check(a)){
    		for(int i=1;i<=n;++i){
    			cout<<a[i];
			}
			cout<<endl;
		}
		sinh();
	}
}   
