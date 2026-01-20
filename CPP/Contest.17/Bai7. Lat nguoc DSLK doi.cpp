#include<iostream>

using namespace std;

struct Node 
{
	int data;
	Node* next; 
};
typedef struct Node* node;
node makeNode(int x) 
{
	node tmp= new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp; 
}
void chencuoi(node &a,int x)
{
	node tmp=makeNode(x);
	if(a==NULL) a=tmp;
	else{
		node p=a;
		while(p->next!=NULL){
			p=p->next; 
		}
		p->next=tmp; 
	} 
}
void in(node a)
{
	while(a!=NULL) {
		cout<<a->data<<" ";
		a=a->next; 
	}
}
void reserve(node &a)
{
	node prev=NULL;
	node current = a;
	node next=NULL;
	while(current !=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next; 
	} 
	a=prev;
}
int main() 
{
	int n; cin>>n;
	node a=NULL; 
	while(n--) {
		int x; cin>>x; 
		chencuoi(a,x) ;
	}
	reserve(a);
	in(a);
	return 0; 
}
