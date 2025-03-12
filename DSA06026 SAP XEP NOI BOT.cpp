#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int main(){
    faster
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i) cin>>a[i];
    for(int i=0;i<n;++i){
        int kt=0;
        for(int j=0;j<n-i-1;++j){
            if(a[j]>a[j+1]){
                kt=1;
                swap(a[j],a[j+1]);
            } 
        }
        if(!kt) return 0;
        cout<<"Buoc "<<i+1<<": ";
        for(int i=0;i<n;++i) cout<<a[i]<<" ";
        cout<<endl;
    }
    

}
