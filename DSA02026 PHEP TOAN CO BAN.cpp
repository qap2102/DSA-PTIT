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
int a[25];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

string tmp="";
vector<string> s1;

bool check(string s){
    int a = (s[0]-'0')*10 + (s[1]-'0');
    int b = (s[5]-'0')*10 + (s[6]-'0');

    int sum=0;
    if(s[3]=='+') sum=a+b;
    else if(s[3]=='-') sum = a-b;

    if(sum == (s[10]-'0')*10 + (s[11]-'0')) return true;
    else return false;
}

void Try(int i, string s){
    // i Biểu thị vị trí kí tự hiện tại
    // s là chuỗi hiện tại

    if(kt) return;

    if(i==s.size()){
        if(check(s)){
            tmp = s;
            s1.push_back(s);
            kt = true;
        }
        return;
    }

    if(s[i]=='?'){
        if(i==3){
            s[i] = '+';
            Try(i+1,s);
            s[i] = '-';
            Try(i+1,s);
        }

        else if(i==0||i==5||i==10){
            for(char j = '1';j<='9';++j){
                s[i] = j;
                Try(i+1,s);
            }
        }
        else if(i==1||i==6||i==11){
            for(char j = '0';j<='9';++j){
                s[i] = j;
                Try(i+1,s);
            }
        }
    }
    else Try(i+1,s);
    

}


int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        s1.clear();
        string s;
        getline(cin,s);
        tmp = "";
        kt = false;
        Try(0,s);

        

        if(tmp != "") cout << tmp << endl;
        else cout << "WRONG PROBLEM!"<<endl;
    }
}