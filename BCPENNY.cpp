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
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n;
		cin>>s;
		vector<int> d(8,0);
		for(int i=0;i<38;++i){
			string a="";
			a=a+s[i]+s[i+1]+s[i+2];
			if(a=="TTT") d[0]++;
			if(a=="TTH") d[1]++;
			if(a=="THT") d[2]++;
			if(a=="THH") d[3]++;
			if(a=="HTT") d[4]++;
			if(a=="HTH") d[5]++;
			if(a=="HHT") d[6]++;
			if(a=="HHH") d[7]++;
//			if(a=="TTT") d1++;
//			if(a=="TTH") d2++;
//			if(a=="THT") d3++;
//			if(a=="THH") d4++;
//			if(a=="HTT") d5++;
//			if(a=="HTH") d6++;
//			if(a=="HHT") d7++;
//			if(a=="HHH") d8++;
			
		}
		cout<<n<<" ";
		for(int i=0;i<8;++i) cout<<d[i]<<" ";
		cout<<endl;
//		cout << n << " " << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << " " << d6 << " " << d7 << " " << d8 << endl;
	}

	
}
// TTT TTH THT THH HTT HTH HHT  HHH.
// 1    2   3   4   5   6   7    8


