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
const int N=1e5+5;

struct node{
    int data;
    struct node* next;
};
node* makeNode(int x){
    node *newNode = new node();
    newNode -> data = x;
    newNode -> next = NULL;
    return newNode;
}

void duyet(node *head){
    while(head!=NULL){
        cout << head -> data <<" ";
        head = head -> next ;

    }
}

bool check(node *head, int k){
    if(head==NULL){
        return true;
    }
    while(head!=NULL){
        if(head->data==k){
            return false;
        }
        head = head -> next ;
    }
    return true;
}


void pushBack(node **head, int x){
    node *temp = *head;
    node *newNode = makeNode(x);
    if(*head == NULL){
        *head = newNode;
        return;

    }
    while(temp-> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
    
}


void solve(){
    int n;
    cin>>n;
    int a[n];
    map<int,int> mp;
    for(int i=0;i<n;++i){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int x:a){
        if(mp[x]){
            cout<<x<<" ";
            mp[x]=0;
        }
    } 
    // cách làm không dùng DSLK
}
int main(){
    faster;
    node *head = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        if(check(head,x)){
            pushBack(&head,x);
        }
    }
    duyet(head);
}
// int main(){
//     solve();
// }