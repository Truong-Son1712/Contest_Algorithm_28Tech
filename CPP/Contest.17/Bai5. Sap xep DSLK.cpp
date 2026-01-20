#include<iostream>

using namespace std;

struct Node 
{
	int data;
	Node* next; 
};
typedef struct Node* node;
node makenode(int x) 
{
	node tmp= new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp; 
}
void chencuoi(node &a,int x) 
{
	node tmp=makenode(x);
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
	while(a!=NULL){
		cout<<a->data<<" ";
		a=a->next; 
	} 
}
void sapxeptang(node &a) 
{
	for(node p=a;p->next != NULL;p=p->next){
		node min=p;
		for(node q=p->next;q!=NULL;q=q->next){
			if(q->data<min->data) min=q; 
		} 
		int tmp=min->data;
		min->data=p->data;
		p->data=tmp; 
	} 
}
void sapxepgiam(node &a) 
{
	for(node p=a;p->next != NULL;p=p->next){
		node max=p;
		for(node q=p->next;q!=NULL;q=q->next){
			if(q->data > max->data) max=q; 
		} 
		int tmp=max->data;
		max->data=p->data;
		p->data=tmp; 
	} 
}
int main() 
{
	int n; cin>>n;
	node a=NULL;
	while(n--){
		int x; cin>>x;
		chencuoi(a,x); 
	} 
	sapxeptang(a);
	in(a); cout<<endl;
	sapxepgiam(a);
	in(a);
	return 0; 
}
