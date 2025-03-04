#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long


int main() {
	faster;


	string s; cin >> s ;
	
	
	ll dau[1000] = {0};
	ll cuoi[1000] = {0};
	
	for (int i = 1; i < s.size(); i++) {
	  if (s[i]==s[0] && i > 0)
	  {
	    cuoi[(int)(s[0])] = i ;
	    continue;
	  }
	    if (dau[(int)(s[i])] == 0 )
	    {
	        dau[(int)(s[i])] = i ;
	    }
	   else cuoi[(int)(s[i])] = i ;
	
	
	}
	dau[s[0]] = 0 ;
	ll dem =0 ;
	for (int i=0 ; i < s.size() ; i=i+1)
	{
	    ll l = dau[(int)(s[i])];
	    ll r = cuoi[(int)(s[i])];
	    for (int j = l + 1 ; j < r ; j++)
	    {
	        if (dau[s[j]] < l || cuoi[s[j]] > r)
	        {
	            dem++;
	            
	        }
	    }
	    
	}
	cout << dem/4 ;

}
// Độ phức tạp O(n^2)