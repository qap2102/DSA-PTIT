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
    int n;
    cin>>n;
    char a[n], b[n];
    for(int i=0;i<n;++i) cin>>a[i];
    for(int i=0;i<n;++i) cin>>b[i];
    for (int i = 0; i < n; i++){
		if (a[i] == b[i]){
			if (a[i] == 'K')
				cout << 'B';
			else if (a[i] == 'B')
				cout << 'G';
			else
				cout << 'K';
		}
		else {
			if (a[i] == 'K' && b[i] == 'B')
				cout << 'B';
			else if (a[i] == 'B' && b[i] == 'K')
				cout << 'B';
			else if (a[i] == 'K' && b[i] == 'G')
				cout << 'K';
			else if (a[i] == 'G' && b[i] == 'K')
				cout << 'K';
			else if (a[i] == 'B' && b[i] == 'G')
				cout << 'G';
			else if (a[i] == 'G' && b[i] == 'B')
				cout << 'G';
		}
	}
}