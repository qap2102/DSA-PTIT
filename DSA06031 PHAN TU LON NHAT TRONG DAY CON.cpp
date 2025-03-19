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

int n,k;
void prototype(){
	int VeBenAnh, beSol;
	cin >> VeBenAnh >> beSol;
	int jack[VeBenAnh]; 
	for(int &bacphan : jack) cin >> bacphan;
	multiset <int> bocon;
	for(int SongGio = 0; SongGio < beSol; SongGio++){
		bocon.insert(jack[SongGio]); 
	} 
	cout << *bocon.rbegin()  << " "; 
	for(int HongNhan = beSol; HongNhan < VeBenAnh; HongNhan++){			
		auto ThienLyOi = bocon.find(jack[HongNhan - beSol]);
		bocon.erase(ThienLyOi); 
		bocon.insert(jack[HongNhan]); 
		cout << *bocon.rbegin() << " "; 
		} 
	cout << endl; 
	// bài làm của thầy Nguyễn Hữu Anh Tài
	// https://www.facebook.com/tho.nguyenhuu.378199
}
int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;++i) cin>>a[i];
		multiset<int> ms;
		for(int i=0;i<k;++i) ms.insert(a[i]);
		cout<<*ms.rbegin()<<" ";
		for(int i=k;i<n;++i){
			auto x = ms.find(a[i-k]);
			ms.erase(x);
			ms.insert(a[i]);
			cout<<*ms.rbegin()<<" ";
		}
		cout<<endl;
		
		
	}

	
}



