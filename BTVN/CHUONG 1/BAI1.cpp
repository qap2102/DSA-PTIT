#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int gcd(ll a, ll b){ //  O(log(min(a,b)))
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){ // O(t)
        ll a,b;
        cin>>a>>b;
        ll k=gcd(a,b);
        ll x=a*b/k;
        cout<<k<<" "<<x<<endl;
    }
}
// Độ phức tạp O(t*log(min(a,b)))
