#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int main(){
	faster;
	int t;
	cin>>t;
//	cin.ignore();
	while(t--){
		int n;
		cin>>n;
		int cnt = 0;
    	for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            
            if (i % 2 == 0) cnt++;
            
            if ((n / i) % 2 == 0 && n / i != i) cnt++;
        }
    }
    	
		cout<<cnt<<endl;
		
		
		
	}
}
