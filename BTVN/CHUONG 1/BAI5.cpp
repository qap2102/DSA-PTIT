#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int main(){
	faster;
	
		string s;
		getline(cin,s);
		int a= s[0]-'0';
		int b = s[4]-'0'; 
    	int c = s[8]-'0'; 
    	if( (a + b) == c) cout << "YES";
    	else cout << "NO";
		
		
	
}
// Độ phức tạp O(1)