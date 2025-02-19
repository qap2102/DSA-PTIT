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
        int i=0, j=n-1;
        while(i<=j){
            if(i==j){
                cout<<a[i]<<" ";
            }
            else{
                cout<<a[j]<<" "<<a[i]<<" ";
            }
            i++;
            j--;
        }
        cout<<endl;
    }
}