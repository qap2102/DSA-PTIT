#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
	faster;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int i, tmp, j;
    for (i = 1; i < n; i++){
        tmp = a[i];
        j = i-1;
        while (j >= 0 && a[j] > tmp){
             a[j+1] = a[j];
             j--;
        }
        a[j+1] = tmp;
    }
    for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}

}
