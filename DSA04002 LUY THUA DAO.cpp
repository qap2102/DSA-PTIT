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

vector<string> v;
int a[100][100];
ll n,m;
string s;
bool kt[15]={0};

int cnt;
int tmp=0;

int cot[100], xuoi[100], nguoc[100];
//void in(){
//	for(int i=0;i<s.size();++i){
//		cout<<s[a[i]];
//	}
//	cout<<" ";
//	
//}

void Try(int i, int cnt){
	for(int j = 1; j <= 8; j++){
        if(!cot[j] && !xuoi[i-j+8] && !nguoc[i+j-1]){
            cot[j] = 1; xuoi[i-j+8] = 1; nguoc[i+j-1] = 1;
            cnt += a[i][j];
            if(i == 8){
                tmp = max(tmp, cnt);
            }
            else Try(i+1,cnt);
            cnt -= a[i][j];
            cot[j] = 0; xuoi[i-j+8] = 0; nguoc[i+j-1] = 0;
        }
    }
}

ll luythua(ll a, ll b){
	
	if(!b) return 1;
	ll c=luythua(a,b/2);
	c=(c*c)%MOD;
	if (b&1) return (c*a)%MOD;
    return c;
}

ll dao(ll n){
	ll tam=0;
	while(n){
		tam=tam*10+n%10;
		n/=10;
	}
	return tam;
}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
    	
    	cin>>n;
    	
    	cout<<luythua(n,dao(n))<<endl;
		
	}
    
}

