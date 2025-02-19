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
    while(t--){
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        int cnt=0;
        for(int i=0;i<n;++i){
            int *it = min_element(a+i,a+n);
            if(it!=a+i){
                cnt++;
                swap(a[i], a[it-a]);
            }
        }
        cout<<cnt<<endl;
    }
}