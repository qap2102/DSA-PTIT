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
        vector<string> v;

        
        
        for(int i=0;i<n;++i) cin>>a[i];


        int tmp=a[0];
        int check;


        for(int i=1;i<n;++i){
            check=a[i];

            int j=i-1;
            while(j>=0 && a[j]>check){
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=check;
            string s="";
            for(int k=0;k<i+1;++k){
                s+=(to_string(a[k])+" ");
            }
            v.push_back(s);
            
        }
        for(int i=v.size()-1;i>=0;--i){
            cout << "Buoc " << i + 1 << ": " << v[i] << endl;
        }
        cout << "Buoc 0: " << tmp << "\n";
    }

