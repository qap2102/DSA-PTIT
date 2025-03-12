#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int n;
string a[1005];
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a[0]="0";
        a[1]="1";
        int tmp=2;
        for(int i=2;i<=n;++i){
            for(int j=0;j<tmp;++j){
                a[2*tmp-j-1]="1"+a[j];
                a[j]="0"+a[j];
            }
            tmp=tmp*2;
        }
        for(int i=0;i<tmp;++i){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}