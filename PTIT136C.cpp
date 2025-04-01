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
	int n;
    cin>>n;
    int a[n][n], s[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>a[i][j];
            s[i][j]=a[i][j];
        }
    }
    int k = (s[0][1] + s[0][2] - s[1][2]) / 2; //=> k= a[0] 
    cout << k << " ";
    for(int i = 1; i < n; i++){
        cout << s[0][i] - k << " ";
        // a[i]=s[0][i]-a[0]
    }

}
// vì s(i,j)+s(i,k)-s(j,k)=a[i]+a[j]+a[i]+a[k]-a[k]-a[j] = 2a[i] => 