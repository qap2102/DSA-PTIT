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

int t,n,x;
ll a[N], b[N];
vector<ll> v;
vector<vector<int>> vv;
bool kt = false;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        v.clear();
        cin>>x>>n;
        ll sum=0;
        for(int i=0;i<n;++i){
            cin>>a[i];
            sum+=a[i];
        }
        ll k = sqrt(sum);
        if(k*k==sum) v.push_back(k);
        for(int i=1;i<k;++i){
            if(sum%i==0){
                v.push_back(i);
                v.push_back(sum/i);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();++i){
            ll tmp=0;
            for(int j=0;j<n;++j){
                tmp += a[j];
                if(tmp==v[i]) tmp = 0;
                else if(tmp>v[i]) break;
            }
            if(!tmp) {
                cout<<x<<" "<<v[i]<<endl;
                break;
            }
        }

        
        
    }
}
// Ta cần duyệt các ước của tổng dãy vì chỉ khi tổng đoạn chia là ước của tổng dãy thì mới có khả năng chia đều ra các đoạn liên tiếp