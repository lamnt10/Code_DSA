#include <bits/stdc++.h>
using namespace std;
struct node (){
	int data;
	node *next;
}
node *makeNode (int x){
	node *newNode =new node();
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}
void duyet(node *head){
	while (head != NULL){
		cout << head->data << " ";
		head=head->next;
	}
}
void pushBack (node **head,int x){
	node *newNode =makeNode(x);
	node *tmp = *head;
	while (tmp->next != NULL){
		tmp = tmp->next ;
	}
	tmp->next = newNode;
}
void popFront (node **head ){
	if (*head == NULL) return ;
	node *temp = *head;
	*head = *head->next;
	delete temp;
}
void popBack (node **head){
	if (*head == NULL ) return ;
	node *temp = *head;
	if (temp->next == NULL){
		*head = NULL; delete temp;
		return ;
	}
	while (temp->next->next != NULL){
		temp=temp->next;
	}
	node *last = temp->next ;
	temp->next = NULL;
	delete last ;
}
int main(){
	node *head = NULL;
	int n;cin >> n; 
	while (n--){
		int x;cin >> x;
		if (n==n){
			head = makeNode(x);
		}
		else pushFront(&head, x );
		
	}
}