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
        sort(a,a+n);
        int l=0, r=n-1;
        while(l<=r){
            if(l==r){
                cout<<a[l]<<" ";
            }
            else{
                cout<<a[r]<<" "<<a[l]<<" ";
            }
            l++;
            r--;
        }
        cout<<endl;
    }
}
