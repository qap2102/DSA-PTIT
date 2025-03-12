#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int sang[1000001] ;
 
void nt(){
  for (int i = 2;i<= 1000000;++i){
    sang[i] = 1;
  }
  sang[0] = 0 , sang[1] = 0;
  for (int i = 2;i<=sqrt(1000000);++i){
    for (int j = i*i;j<= 1000000;j+=i){
      sang[j] = 0;
    }
  }
}
int main(){
	faster;
	nt();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=2;i<=n;++i){
			if(sang[i]==1){
				v.push_back(i);
			}
		}
		int kt=0;
		int tmp1=0, tmp2=0;
		for(int i=0;i<v.size();++i){
			if (binary_search(v.begin(),v.end(),n-v[i])){
			
  		
			    kt = 1;
			    tmp1 = v[i];
			    tmp2 = n-v[i];
			    break;
  			}
		}
		if(kt==1){
			cout<<tmp1<<" "<<tmp2<<endl;
		}
		else cout<<-1<<endl;
	}
}
