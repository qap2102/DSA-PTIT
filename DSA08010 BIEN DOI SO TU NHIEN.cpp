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
const int N=505;

int t,n,x,k;

pair<int,int> p; // fi lưu giá trị hiện tại, se lưu số bước

queue<pair<int,int>> q;
map<int,bool> mp;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        mp.clear();
        q = queue<pair<int,int>>();
        cin>>n;
        q.push({n,0});
        mp[n]=true;

        while(1){
            p =q.front();
            q.pop();
            if(p.fi==1){
                cout<<p.se<<endl;
                break;
            }
            
            for(int i=2;i*i<=p.fi;i++){
                if(p.fi%i==0){
                    if(!mp[p.fi/i]){
                        mp[p.fi/i]=true;
                        q.push({p.fi/i,p.se+1});
                    }
                }
            }

            if(!mp[p.fi-1]){
                mp[p.fi-1]=true;
                q.push({p.fi-1,p.se+1});
            }
        }

    }
}