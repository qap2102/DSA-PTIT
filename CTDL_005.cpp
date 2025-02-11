#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long


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

// void pushFront(node **head, int x){
//     node *newNode = makeNode(x);
//     newNode -> next = *head;
//     (*head) = newNode;
// }

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

// void insert(node **head, int k, int x){
//     // k là vị trí chèn
// 	int n = sizeof(*head);
// 	if(k < 1 || k > n + 1) return;
// 	if(k == 1){
// 		pushFront(head, x);
//         return;
// 	}
// 	node *temp = *head;
// 	for(int i = 1; i <= k - 2; i++){
// 		temp = temp->next;
// 	}
	
// 	node *newNode = makeNode(x);
// 	newNode->next = temp->next;
// 	temp->next = newNode; 
// }

void popFront(node **head){
    if(*head == NULL) return;
    node *temp = *head;
    *head = (*head)->next;
    delete temp;
}

// void popBack(node **head){
//     if(*head == NULL ) return;
//     node *temp = *head;
//     if(temp->next == NULL){
//         *head = NULL;
//         delete temp;
//         return;

//     }
//     while(temp->next->next !=NULL){
//         temp = temp->next;
//     }
//     node *last = temp -> next;
//     temp -> next = NULL;
//     delete last;
// }

void xoa(node **head, int k){
    // k laf vị trí xóa
	int n = sizeof(*head);
	if(k < 1 || k > n) return; 
	if(k == 1) popFront(head);
	else{
		node *temp = *head;
		for(int i = 1; i <= k - 2; i++){
			temp = temp->next;
		}
		//temp : k - 1
		node *kth = temp->next; // node thu k
		//cho k-1 => ket noi voi node thu k + 1
		temp->next = kth->next;
		delete kth; 
	}
}
int kt=0;
void solve(node **head, int gt){
    int cnt=1;
    node *temp = *head;
    while(temp!=NULL){
        if(temp->data==gt){
            xoa(head, cnt);
            kt=1;
            return;
        }
        ++cnt;
        temp=temp->next;
    }
}
void solve2(){
    int n;
    cin>>n;
    int a[n];
    int x;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    cin>>x;
    for(int i=0;i<n;++i){
        if(a[i]!=x) cout << a[i] <<" ";
    }
 // cách làm khác không dùng DSLK
}
int main(){
    node *head = NULL;
    int n,k;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        pushBack(&head,x);
    }
    cin>>k;
    while(1){
        kt=0;
        solve(&head,k);
        if(kt==0) break;
    }
    duyet(head);
    
}
// int main(){
//     solve2();
// }
